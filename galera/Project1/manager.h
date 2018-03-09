#pragma once
#include"developer.h"
#include<string>

using namespace std;

class manager:public employee
{
private:
	int count_of_depender_employe;

public:
	void setCount_of_depender_employee(int n_count);
	int getCount_of_depender_employe();

};