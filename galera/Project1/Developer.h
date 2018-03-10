#pragma once
#include<string>
#include "Employee.h"

using namespace std;

class Developer:public Employee
{
private:
	   string language;

public:
	void setLanguage(string lang);
	string getLanguage();

};
