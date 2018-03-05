#include<iostream>
#include "Matrix.h"
#include<array>

using std::array;
using namespace std;


int main()
{

	array<array<int, 3>, 3> My_array1;
	My_array1 = { { { 1, 2, 2 },{ 3, 1, 1 },{ 1, 1, 1 } } };
	
	array<array<int, 3>, 3> My_array2;
	My_array2 = { { { 1, 1, 1 },{ 2, 2, 2 },{ 2, 3, 3 } } };

	Matrix first(My_array1);
	Matrix second(My_array2);
	Matrix c = first * second;
     
	Matrix k = first + second;
	cout << k;


	
	
    system("pause");
	return 0;
}