#pragma once
#include <cliext/vector>
#include "Item.h"

using namespace System;

ref class WorkspaceContainer
{
	public:
		WorkspaceContainer()
		{

		}
		void setData(int id, String^ wname) {
			id = id;
			name = wname;
		}
		String^ getName(){
			return name;
		}
		int id;
		String^ name;
		cliext::vector<Item^> items;
		
};

