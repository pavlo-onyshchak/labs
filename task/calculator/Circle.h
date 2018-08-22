#pragma once
#include"Basic.h"

class Circle:public Basic
{
private:
    int radius;

public:
    Circle(int);
    int area()const;
    int perimetr()const;
};
