#pragma once
#include<string>
#include"Node.h"

using namespace std;

class Queue
{    
public:
    void push(string key, int priority);
    void pop();
    int size() const;
    void show() const;
private:
    Node* m_begin = nullptr;
};
