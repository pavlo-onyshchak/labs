#include<iostream>
#include"Queue.h"
#include"Node.h"
using namespace std;
int main()
{
	
		Queue first;
		first.push(2);
		/*for (auto x : first.DebugTraverse())
		{
			cout << x << " ";
		}*/

		cout << endl;
		int k = first.front();
		cout << k << endl;
		system("pause");
	    return 0;
}
