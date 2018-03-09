#include"developer.h"
#include"galera.h"
#include"manager.h"
#include"employe.h"
#include<iostream>
#include <string>

using namespace std;

int main()
{
	employee first;
	first.setName("Bozhena");
	first.setSurname("Gamada");
	first.setSallary(300);
	string k = first.getName();
	string x = first.getSurname();
	int r = first.getSallary();
	cout << "the name of employee is -" << k << endl;
	cout << "the surname of employee is -" << x << endl;
	cout << "the sallary of employee is -" << r << endl;
   system("pause");
	return 0;
}