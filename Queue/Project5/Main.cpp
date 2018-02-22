#include<iostream>
#include"Queue.h"
using namespace std;
int main()
{
	Queue first;
	first.push(2);
	first.push(4);
	first.push(7);
	first.push(9);
	first.pop();
	first.pop();
	first.pop();
	first.pop();
	first.pop();
	int k=first.front();
	int c = first.back();
	cout << k <<" "<<c<< endl;
	system("pause");
	return 0;
}
