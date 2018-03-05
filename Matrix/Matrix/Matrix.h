#pragma once
#include <array>
#include <ostream>
#include <initializer_list>

using std::array;
using std::initializer_list;



class Matrix
{
private:
	array<array<int, 3>, 3> My_array;

public:
	const void show();
	Matrix(array<array<int, 3>, 3>& array);
	Matrix(const Matrix&);

	Matrix operator=(const Matrix&);
	Matrix  operator+(Matrix&) const;
	Matrix  operator*(const Matrix&) const;
	friend std::ostream& operator<<(std::ostream& output, const Matrix& object);

};