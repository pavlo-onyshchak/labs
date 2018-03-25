#pragma once
#include <string>
#include <iostream>

using namespace std;

class ItCompany
{
public:
	ItCompany();
	ItCompany(string name, int empolyeeCount, int officeCount);

	friend ostream& operator<<(ostream& out, const ItCompany&);
	friend istream& operator>>(istream& in, ItCompany&);
private:
	static string getGuid();
private:
	string _id; // GUID
	string _name;
	int _employeeCount;
	int _officeCount;
};