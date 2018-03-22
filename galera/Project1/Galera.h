#pragma once
#include<string>
#include"Employee.h"
#include<vector>

using namespace std;

class Galera
{
private:
    string _name;
    int _employeeCount;
    int _totalSallary;
    vector<Employee> _employeeList;

public:
    Galera(string name);
    string getName() const;
    void setEmployeeCount(int count);
    int getEmployeeCount() const;
    void setTotalSallary(int total);
    int getTotalSallary() const;
    bool hireEmployee(Employee);
    friend std::ostream& operator<<(ostream& , const Galera&);
    bool fireEmployee(Employee);
 };

