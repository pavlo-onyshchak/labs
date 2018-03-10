#pragma once
#include<string>
#include "employe.h"

using namespace std;


class developer:public employee
{
private:
	   string language;

public:
	void setLanguage(string lang);
	string getLanguage();

};
