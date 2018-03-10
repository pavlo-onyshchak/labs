#pragma once
#include<string>

using namespace std;

class Galera
{
private:
	string _name;
	int _countOfemploye;
	int _totalSallary;

public:
	void setName(string name);
	string getName();
	void setCountOfemploye(int count);
	int getCountOfemploye();
	void setTotalSallary(int total);
	int getTotalSallary();


};