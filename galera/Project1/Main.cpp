#include"Developer.h"
#include"Galera.h"
#include"Manager.h"
#include"Employee.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{
    Developer first;
    first.setLanguage(Developer::language::java);
    string k = first.getLanguage();
    cout << k << endl;

   system("pause");
    return 0;
}
