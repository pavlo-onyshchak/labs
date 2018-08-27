#pragma once
#include"Basic.h"

class Quadrate:public Basic
{
private:
    
    int width;
    int length;
    

public:
    Quadrate(int side_1, int side_2);
    double Square()const;
    double Perimetr()const;

};
