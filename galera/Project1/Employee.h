#pragma once
#include<string>

using namespace std;

class Employee
{
private:
    string _name;
    string _surname;
    int _sallary;

public:
    void setName(string name);
    string getName();
    void setSurname(string surname);
    string getSurname();
    void setSallary(int sallary);
    int getSallary();
};
