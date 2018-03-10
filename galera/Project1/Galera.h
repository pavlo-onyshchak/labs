#pragma once
#include<string>

using namespace std;

class Galera
{
private:
	string name;
	int countOfemploye;
	int totalSallary;

public:
	void setName(string n_name);
	string getName();
	void setCountOfemploye(int count);
	int getCountOfemploye();
	void setTotalSallary(int total);
	int getTotalSallary();


};