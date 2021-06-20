#include "DataRepository.h"

using namespace System;
using namespace  Microsoft::Win32;
using namespace System::IO;
using namespace Newtonsoft;

bool DataRepository::launchAtStartup()
{
	RegistryKey^ rk = Registry::CurrentUser->OpenSubKey(_regKeyPath, true);
	if (rk != nullptr) {
		try {
			if (rk->GetValue(_regKey) != nullptr)
				return true;
		}
		catch (Exception^ e) {
			return false;
		}
	}
    return false;
}

void DataRepository::setLaunchAtStartup(bool value)
{
	RegistryKey^ rk = Registry::CurrentUser->OpenSubKey(_regKeyPath, true);
	if (value) {
		rk->SetValue(_regKey, _executablePath);
	}
	else {
		rk->DeleteValue(_regKey, false);
	}
}

void DataRepository::readDataFile()
{
	try {
		myWorkpaces.empty();
		StreamReader^ din = File::OpenText(_filePath);
		String^ data = din->ReadLine();
		array<WorkspaceContainer^>^ root = Newtonsoft::Json::JsonConvert::DeserializeObject<array<WorkspaceContainer^>^>(data);
		din->Close();
		for (int i = 0; i < root->Length; i++) {
			myWorkpaces.push_back(root[i]);
		}
	}
	catch (Exception^ e) {
	}
}

void DataRepository::writeDataFile()
{
	try {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(_filePath, false);
		Newtonsoft::Json::JsonSerializer^ serializer = gcnew Newtonsoft::Json::JsonSerializer();
		serializer->Serialize(sw, myWorkpaces);
		sw->Close();
	}
	catch (Exception^ e) {

	}
}

void DataRepository::deleteWorkspace(int index)
{
	if (index >= myWorkpaces.size())
		return;
	int j = 0;
	for (auto i = myWorkpaces.begin(); i != myWorkpaces.end(); i++) {
		if (j == index)
		{
			myWorkpaces.erase(i);
			break;
		}
		j++;
	}
}

void DataRepository::deleteWorkspaceItem(int wIndex, int itemIndex)
{
	WorkspaceContainer^ currentWorkspace = myWorkpaces[wIndex];
	if (itemIndex >= currentWorkspace->items.size())
		return;
	int j = 0;
	for (auto i = currentWorkspace->items.begin(); i != currentWorkspace->items.end(); ) {
		if (j == itemIndex)
		{
			currentWorkspace->items.erase(i);
			break;
		}
		j++;
	}
}
