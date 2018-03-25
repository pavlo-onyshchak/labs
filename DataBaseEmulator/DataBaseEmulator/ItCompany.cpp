#include "ItCompany.h"
#include <Windows.h>
#include <atlstr.h>  

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