#include"Vector.h"
#include<iostream>

using namespace std;

void Vector::resize()
{
    int* arr = new int[capacity + 10];
    for (int i = 0; i < capacity; i++)
    {
        arr[i] = array[i];
    }

    capacity += 10;
    delete[] array;
    array = arr;
}

Vector::Vector()
{
    capacity = 10;
    size_t = 0;
    array = new int[capacity];

}

void Vector::push_back(int val)
{
    if (size_t >= capacity)
    {
        resize();
    }
    array[size_t] = val;
    size_t++;
}

void Vector::pop_back()
{
    --size_t;
}

int Vector::get_item(int index) const
{
    return array[index];
}

void Vector::set_item(const int index,const int &value)
{
    array[index] = value;
}

int Vector::size() const
{
    return size_t;
}

void Vector::show() const
{
    for (int i = 0; i < size_t; i++)
    {
        cout << array[i] << "  ";
    }
}
