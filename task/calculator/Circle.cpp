#include"Circle.h"



Circle::Circle(int r_radius)
{
    radius = r_radius;
}

int Circle::area() const
{
    double area_var = (3, 14) * (radius*radius);
    return area_var;
}

int Circle::perimetr() const
{
    double per_var = (3, 14) * 2 * radius;
    return per_var;
}
