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
    Employee(string name, string surname);
    string getName() const;
    string getSurname() const;
    void setSallary(int sallary);
    int getSallary() const;
    bool operator==(const Employee&);
    friend std::ostream& operator<<(ostream&, const Employee& );
};

