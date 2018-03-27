#include "ItCompany.h"
#include "DataBase.h"
#include <iostream>

int main()
{
	DataBase db;
	ItCompany company("SoftServe", 4000, 20);
	db.insert(company);

	system("pause");
	return 0;
}