#include"Queue.h"
#include<iostream>

using namespace std;

int main()
{
    Queue queue;
    queue.push("pasha", 2);
    queue.push("petro", 1);
    queue.push("ivan", 1);
    queue.push("nazar", 1);
    queue.push("ivan", 2);
    queue.push("misha", 5);
    queue.push("vitya", 7);
    queue.push("nastya", 3);
    queue.show();

    int size = queue.size();
    cout << "size is " << size << endl;

    
    cout << endl;
    queue.pop();
    queue.pop();
    queue.pop();
    queue.pop();
    queue.pop();
    queue.show();


    int k = queue.size();
    cout << "size is " << k << endl;

    
    system("pause");
    return 0;
}