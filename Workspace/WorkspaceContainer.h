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
		int id;
		String^ name;
		cliext::vector<Item^> items;
		
};

