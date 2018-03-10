#pragma once
#include<string>
#include "Employee.h"

using namespace std;

class Developer : public Employee
{
private:
    string _language;

public:
    void setLanguage(string language);
    string getLanguage() const;
};
