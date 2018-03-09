#pragma once
#include<string>

using namespace std;

class galera
{
private:
	string name;
	int count_of_employe;
	int total_sallary;

public:
	void setName(string n_name);
	string getName();
	void setCount_of_employe(int count);
	int getCount_of_employe();
	void setTotal_sallary(int total);
	int getTotal_sallary();


};