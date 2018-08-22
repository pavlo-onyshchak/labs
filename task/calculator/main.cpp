#include"Circle.h"
#include"Paralelogram.h"
#include"Square.h"
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<Basic>vec;
    Paralelogram first(2, 2, 4);
    vec.push_back(first);
    
    
    system("pause");
    return 0;
}