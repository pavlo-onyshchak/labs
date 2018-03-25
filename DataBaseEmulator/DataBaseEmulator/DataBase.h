#pragma once
#include "ItCompany.h"
#include <iostream>
#include <vector>

using namespace std;

class DataBase
{
public:
	friend ostream& operator<<(ostream& out, const DataBase&); // 1.1, 2.2

	ItCompany find(const string& id) const; // 1.2
	vector<ItCompany> find(const vector<string>& ids) const; // 2.3

	bool remove(const string& id); // 1.3
	bool remove(const vector<string>& ids); // 2.4

	bool insert(const string& id); // 1.4
	bool insert(const vector<string>& ids); // 2.5

	bool update(const string& id, const ItCompany&); // 1.5
	bool update(const vector<string>& ids, const vector<ItCompany>&); // 2.6
};