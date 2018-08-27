#include"Quadrate.h"


Quadrate::Quadrate(int side_1, int side_2)
{
    width = side_1;
    length = side_2;
    
}

double Quadrate::Square() const
{

    return width*length;
}

double Quadrate::Perimetr() const
{
    return width+length+width+length;
}
