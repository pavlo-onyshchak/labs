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
    Vector(const Vector &object);
    void push(int val);
    void pop();
    int size()const;
    void show()const;
    int &operator[] (int val);
    void erase(const int index);
    void clear();
    int find(const int val);
    void operator=(const Vector &object);

   

};