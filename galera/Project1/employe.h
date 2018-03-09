#pragma once
#include<string>

using namespace std;

class employee
{
private:
	std::string name;
	std::string surname;
	int sallary;

public:
	void setName(string s_name);
	string getName();
	void setSurname(string s_surname);
	string getSurname();
	void setSallary(int n_sallary);
	int getSallary();
};
