#include"Vector.h"
#include<iostream>

using namespace std;

int main()
{
    Vector vector;
    vector.push_back(3);
    vector.push_back(12);
    vector.push_back(11);
    
    int k= vector.size();
    cout << k << endl;
    vector.show();
    cout << endl;
    vector.set_item(1, 5);
    vector.show();
    cout << endl;
    int b=vector.get_item(2);
    cout << b << endl;

    
    system("pause");
    return 0;
}