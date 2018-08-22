#include"Square.h"


Square::Square(int side_1, int side_2)
{
    first_side = side_1;
    second_side = side_2;
    
}


int Square::area() const
{
    int area_variable;
    area_variable = first_side * second_side;
    return area_variable;
}

int Square::perimetr() const
{
    int per_var = (first_side * 2) + (second_side * 2);
    return per_var;
}
