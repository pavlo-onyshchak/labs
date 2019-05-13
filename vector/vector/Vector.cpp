#include "Vector.h"
#include <iostream>

using namespace std;

void Vector::resize()
{
    const int growth_factor = 2;
    int* arr = new int[_capacity * growth_factor];

    memcpy(arr, _array, _capacity * sizeof(_capacity));
    _capacity *= growth_factor;

    delete[] _array;
    _array = arr;
}

Vector::Vector()
{
    _capacity = 10;
    _size = 0;
    _array = new int[_capacity];

}

Vector::Vector(const Vector& object)
{
    _size = object._size;
    _capacity = object._capacity;
    _array = new int [_capacity];
    memcpy(_array, object._array, _capacity * sizeof(_capacity));
}

Vector& Vector::operator=(const Vector& object)
{
    if (this != &object)
    {
        _size = object._size;
        _capacity = object._capacity;
        _array = new int[_capacity];
        memcpy(_array, object._array, _capacity * sizeof(_capacity));
    }

    return *this;
}

void Vector::push_back(const int val)
{
    if (_size >= _capacity)
    {
        resize();
    }

    _array[_size] = val;
    ++_size;
}

void Vector::pop_back() 
{
    --_size;
}


int Vector::size() const
{
    return _size;
}

int& Vector::operator[](const int index)
{
    return _array[index];
}

void Vector::erase(const int index)
{
    memmove(_array + index, _array + index + 1, (_size - index - 1) * sizeof(_size));
    --_size;
}

void Vector::clear()
{
    _size = 0;
}

int Vector::find(const int val)
{
    int found_index = -1;
    for (int i = 0; i < _size; i++)
    {
        if (val == operator[](i))
        {
            found_index = i;
            break;
        }
    }
    return found_index;
}

