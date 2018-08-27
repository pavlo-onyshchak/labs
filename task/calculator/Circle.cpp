#include"Circle.h"
//#define P = 3,14;


Circle::Circle(int r_radius)
{
    radius = r_radius;
}

double Circle::Square() const
{
    return 3.14*radius*radius;
}

double Circle::Perimetr() const
{
    return 2*3.14*radius;
}


