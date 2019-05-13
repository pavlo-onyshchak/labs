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

Vector::Vector(const Vector &object)
{
    this->size_t = object.size_t;
    this->capacity = object.capacity;
    this->array = object.array;
}

void Vector::operator=(const Vector &object)
{
    this->size_t = object.size_t;
    this->capacity = object.capacity;
    this->array = object.array;
}

void Vector::push(int val)
{
    if (size_t >= capacity)
    {
        resize();
    }
    array[size_t] = val;
    size_t++;
}

void Vector::pop()
{
    --size_t;
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

int& Vector::operator[](int index)
{
    
    return array[index];
}

void Vector::erase(const int index)
{
    if (index >= size_t)
    {
        throw out_of_range("out of range");
    }

    for (int i = index; i < size_t; i++)
    {
        array[i] = array[i + 1];
    }
    size_t--;
}

void Vector::clear()
{
    while (size_t)
    {
        size_t--;
    }
}

int Vector::find(const int val)
{
    int found_index = -1;
    for (int i = 0; i < size_t; i++)
    {
        if (val == array[i])
        {
            found_index = i;
            break;
        }
    }

     return found_index;
}

