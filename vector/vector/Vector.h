#pragma once


class Vector
{
private:
    int size_t;
    unsigned int capacity;
    int* array;
    void resize();
public:
    Vector();
    void push_back(int);
    void pop_back();
    int get_item(int)const;
    void set_item(const int,const int &);
    int size()const;
    void show()const;

};