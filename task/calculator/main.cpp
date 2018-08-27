#include"Circle.h"
#include"Paralelogram.h"
#include"Quadrate.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<Basic*>vec;
    Circle*first = new Circle(3);
   
    vec.push_back(first);


    for (auto item : vec)
    {
        cout << item->Square() << endl;
        cout << item->Perimetr() << endl;
    }
    
    system("pause");
    return 0;
}