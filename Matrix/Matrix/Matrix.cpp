#include "Matrix.h"
#include<iostream>


using namespace std;

const void Matrix::show()
{
	for (array<int, 3> row : My_array)
	{
		for (int elem : row) 
		{
			cout << elem << " ";
		}
	}
}
// explanation how range for loop is working
//
//for (auto it = row.begin(); it != row.end(); ++it)
//{
//	body(*it)
//}

Matrix::Matrix( array<array<int, 3>, 3>& array)
{  
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			My_array[i][j] = array[i][j];
		}

	}
}

Matrix::Matrix(const Matrix & object )
{
	this->My_array = object.My_array;
}
//
Matrix  Matrix::operator=(const Matrix & object)
{
	this->My_array = object.My_array;
	return this->My_array;
}

Matrix  Matrix::operator+( Matrix & object)  const
{
	array<array<int, 3>, 3> array;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			array[i][j]=this->My_array[i][j]+object.My_array[i][j];
	
        }
	}
	return array;
}

Matrix  Matrix::operator*(const Matrix & object) const
{
	array<array<int, 3>,3> arr;
	for (int i = 0; i < My_array.size(); i++)
	{
		for (int j = 0; j < My_array[i].size(); j++)
		{
			arr[i][j]=0;
			for (int k = 0; k < My_array.size(); k++)
			{
				arr[i][j] += this->My_array[i][k] * object.My_array[k][j];
			}
		}
	}
         return arr;
}



ostream& operator<<(ostream& output,const Matrix& object)
{
	 
	for (array<int, 3> row : object.My_array)
	{
		for (int elem : row)
		{
			output << elem << " ";
		}
	}
	   return output;
}

  