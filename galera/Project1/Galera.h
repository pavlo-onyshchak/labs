#pragma once
#include<string>

using namespace std;

class Galera
{
private:
    string _name;
    int _EmployeeCount;
    int _totalSallary;

public:
    void setName(string name);
    string getName() const;
    void setEmployeeCount(int count);
    int getEmployeeCount() const;
    void setTotalSallary(int total);
    int getTotalSallary() const;
};
