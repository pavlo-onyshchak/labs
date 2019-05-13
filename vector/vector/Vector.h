#pragma once

class Vector
{
public:
    Vector();
    Vector(const Vector &object);

    int& operator[](const int val);
    Vector& operator=(const Vector &object);

    void push_back(const int val);
    void pop_back();
    void erase(const int index);
    void clear();
    int find(const int val);
    int size() const;
    
private:
    void resize();
 
    int _size;
    int _capacity;
    int* _array;
};
