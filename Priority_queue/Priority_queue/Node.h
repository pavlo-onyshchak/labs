#pragma once
#include<string>

using namespace std;

struct Node
{
    Node(const string str, int p) : key(str), priority(p) {}

    Node * next = nullptr;
    string key;
    int priority;
};