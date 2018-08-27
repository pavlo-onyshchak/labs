#include"Paralelogram.h"

Paralelogram::Paralelogram(int x, int y, int z)
{
    first_side = x;
    second_side = y;
    height = z;
}

double Paralelogram::Square() const
{
    return first_side*height;
}

double Paralelogram::Perimetr() const
{
    return first_side + second_side + first_side + second_side;
}

