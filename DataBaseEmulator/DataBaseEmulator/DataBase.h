#pragma once
#include "ItCompany.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class DataBase
{
public:
	DataBase();
	friend ostream& operator<<(ostream& out, const DataBase&); // 1.1, 2.2

	bool find(const string& id, ItCompany&) const; // 1.2
	bool find(const vector<string>& ids, vector<ItCompany>&) const; // 2.3

	bool remove(const string& id); // 1.3
	bool remove(const vector<string>& ids); // 2.4

	bool insert(const string& id); // 1.4
	bool insert(const vector<string>& ids); // 2.5

	bool update(const string& id, const ItCompany&); // 1.5
	bool update(const vector<string>& ids, const vector<ItCompany>&); // 2.6
private:
	fstream _file;
};
