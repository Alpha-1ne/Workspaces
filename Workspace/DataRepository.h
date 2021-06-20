#pragma once
#include "WorkspaceContainer.h"

using namespace cliext;

public ref class DataRepository
{
public:
	DataRepository() {
		_filePath = "";
		_executablePath = "";
	}
	DataRepository(String^ applicationPath, String^ executablePath){
      _filePath = String::Concat(applicationPath, _fileName);
	  _executablePath = executablePath;
	}
	bool launchAtStartup();
	void setLaunchAtStartup(bool value);
	void readDataFile();
	void writeDataFile();
	void deleteWorkspace(int index);
	void deleteWorkspaceItem(int wIndex,int itemIndex);
	cliext::vector<WorkspaceContainer^> myWorkpaces;

private:
	String^ _filePath;
	String^ _executablePath;
	//String Constants
	String^ _fileName = "\\appdata.json";
	String^ _regKeyPath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";
	String^ _regKey = "Workspaces";
};

