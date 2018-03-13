#pragma once
#include<string>
#include "Employee.h"

using namespace std;

class Developer : public Employee
{
private:
    string _language;

public:
    enum class  language { c, c_sharp, python, c_plusplus, java };
    void setLanguage(language language);
    string getLanguage() const;
 };

