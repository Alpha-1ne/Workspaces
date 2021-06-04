#pragma once
using namespace System;

ref class Item
{
public:
	Item(int _id, String^ _name) {
		id = _id;
		name = _name;
	}
	int id;
	String^ name;
	int type;
	String^ url;
	String^ command;
	String^ application;
	String^ directory;
};

