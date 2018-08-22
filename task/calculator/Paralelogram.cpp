#include"Paralelogram.h"

Paralelogram::Paralelogram(int x, int y, int z)
{
    first_side = x;
    second_side = y;
    height = z;
}

int Paralelogram::area() const
{
    int area_var;
    area_var = first_side * height;
    return area_var;
}

int Paralelogram::perimetr() const
{
    int per_var = first_side + first_side + second_side + second_side;
    return per_var;
}
