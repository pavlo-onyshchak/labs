#pragma once
#include"Basic.h"

class Square:public Basic
{
protected:
    
    int first_side;
    int second_side;
    

public:
    Square(int side_1, int side_2);
    int area()const;
    int perimetr()const;

};
