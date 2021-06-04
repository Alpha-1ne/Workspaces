#pragma once
using namespace System;

ref class WorkspaceContainer
{
	public:
		WorkspaceContainer()
		{

		}
		void setData(int id, String^ wname) {
			_id = id;
			_name = wname;
		}
		String^ getName(){
			return _name;
		}
		int _id;
		String^ _name;
};

