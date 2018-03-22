#pragma once
#include<string>
#include "Employee.h"

using namespace std;

class Developer : public Employee
{
public:
    enum class  language { C, CSharp, Python, CPlusPlus, Java };
    void setLanguage(language language);
     language getLanguage() const;
private:
    language _language;
 };

