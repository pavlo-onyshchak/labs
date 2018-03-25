#pragma once
#include <string>

using namespace std;

class ItCompany
{
public:
	ItCompany(string name, int empolyeeCount, int officeCount);
private:
	static string getGuid();
private:
	string _id; // GUID
	string _name;
	int _employeeCount;
	int _officeCount;
};