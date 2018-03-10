#pragma once
#include"Developer.h"
#include<string>

using namespace std;

class Manager : public Employee
{
private:
    int  _subordinatesCount;

public:
    void setSubordinatesCount(int count);
    int getSubordinatesCount();
};