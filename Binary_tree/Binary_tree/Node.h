#pragma once

struct Node
{
    Node(int k_key) :key(k_key) {}
    
    int key;
    Node* right = nullptr;
    Node* left = nullptr;

    
};
