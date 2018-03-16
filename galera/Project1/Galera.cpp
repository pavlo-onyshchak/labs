#include"Galera.h"
#include<iostream>
#include<vector>

using namespace std;

void Galera::setName(string name)
{
    _name = name;
}

string Galera::getName() const
{
    return _name;
}

void Galera::setEmployeeCount(int count)
{
    _employeeCount = count;
}
int Galera::getEmployeeCount() const
{
    return _employeeCount;
}

void Galera::setTotalSallary(int total)
{
    _totalSallary = total;
}

int Galera::getTotalSallary() const
{
    return _totalSallary;
}

bool Galera::hireEmployee(Employee first)
{
    bool k = true;
    if (_employeeList.empty())
    {
        _employeeList.push_back(first);
        return true;
    }
    auto x = _employeeList.begin();
    for (int i = 0; i < _employeeList.size(); i++)
    {
        
        if (first == *x)
        {
            return false; 
        }
        ++x;
    }
    if (k == true)
    {
        _employeeList.push_back(first);
        return true;
    }
}

 ostream& operator<<(ostream & output,const Galera& object)
{
     output << "galera name is -" <<object._name <<" ";
     output << "galera employee count  is -" << object._employeeCount << " ";
     output << "galera total sallary is -" << object._totalSallary << endl;
     output << "employee:" << endl;

     for (auto employee :object._employeeList)
     {
         output << employee;
     }

     return output;
}
 

bool Galera::fireEmployee(Employee object)
{
    if (_employeeList.empty())
    {
        return false;
    }
   
    for (int i = 0; i < _employeeList.size(); i++)
    {
        
        if (object == _employeeList[i])
        {
            _employeeList.erase(_employeeList.begin() + (i));
            return true;
        }
    }
    
}


