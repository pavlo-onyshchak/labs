#include "ItCompany.h"
#include <Windows.h>
#include <atlstr.h>
#include <vector>
#include <sstream>

static const char Separator = ',';

ItCompany::ItCompany()
{
	_id = getGuid();
}

ItCompany::ItCompany(string name, int empolyeeCount, int officeCount) :
	_name(name),
	_employeeCount(empolyeeCount),
	_officeCount(officeCount)
{
	_id = getGuid();
}

string ItCompany::getGuid()
{
	GUID guid;
	CoCreateGuid(&guid);
	BYTE * str;
	UuidToString((UUID*)&guid, &str);

	CString unique((LPTSTR)str);

	RpcStringFree(&str);

	return unique.GetString();
}

vector<string> Split(const string str, const char delim)
{
	stringstream ss(str);
	string item;
	vector<string> elems;
	while (getline(ss, item, delim)) 
	{
		elems.push_back(item);
	}

	return elems;
}

ostream& operator<<(ostream& out, const ItCompany& c)
{
	out << c._id << Separator << c._name << Separator << c._employeeCount << Separator << c._officeCount << endl;
	return out;
}

istream& operator>>(istream& in, ItCompany& company)
{
	string line;
	std::getline(in, line);

	vector<string> fields = Split(line, Separator);
	company._id = fields[0];
	company._name = fields[1];
	company._employeeCount = stoi(fields[2]);
	company._officeCount = stoi(fields[3]);

	return in;
}
