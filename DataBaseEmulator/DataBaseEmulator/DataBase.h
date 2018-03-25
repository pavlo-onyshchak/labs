#pragma once
#include "ItCompany.h"
#include <iostream>
#include <vector>

using namespace std;

class DataBase
{
public:
	friend ostream& operator<<(ostream& out, const DataBase&); // 1.1, 2.2

	bool find(const string& id, ItCompany&) const; // 1.2
	bool find(const vector<string>& idCollection, vector<ItCompany>&) const; // 2.3

	bool remove(const string& id); // 1.3
	bool remove(const vector<string>& idCollection); // 2.4

	bool insert(const string& id); // 1.4
	bool insert(const vector<string>& idCollection); // 2.5

	bool update(const string& id, const ItCompany&); // 1.5
	bool update(const vector<string>& idCollection, const vector<ItCompany>&); // 2.6
private:
	static vector<ItCompany> read(ifstream& in);
	static void write(ofstream& out, const vector<ItCompany>&);
	static void updateRecord(ItCompany& dest, const ItCompany& source);
};
