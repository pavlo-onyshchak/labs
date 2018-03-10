#pragma once
#include"Developer.h"
#include<string>

using namespace std;

class Manager:public Employee
{
private:
	int  subordinatesCount;

public:
	void setSubordinatesCount(int n_count);
	int getSubordinatesCount();

};