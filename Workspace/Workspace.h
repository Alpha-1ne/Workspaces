#pragma once

using namespace System;

ref class Workspace
{
public:
	Workspace()
	{

	}
	void setData(int id, String^ wname) {
		_id = id;
		name = wname;
	}
private:
	int _id;
	String^ name;
};

