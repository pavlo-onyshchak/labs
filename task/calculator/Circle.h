#pragma once
#include"Basic.h"

class Circle:public Basic
{
private:
    int radius;

public:
    Circle(int);
    double Square()const;
    double Perimetr()const;
};
