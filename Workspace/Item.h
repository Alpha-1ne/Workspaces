#pragma once
using namespace System;

ref class Item
{
public:
	Item(int _id, int _parentId) {
		id = _id;
		parentId = _parentId;
	}
	int id;
	int parentId;
	String^ name;
	int type;
	String^ url;
	String^ command;
	String^ application;
	String^ directory;
	bool runAsAdmin;
};

