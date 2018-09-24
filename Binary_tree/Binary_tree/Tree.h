#pragma once

class Tree
{
public:
    void insert(int key);
    void insert(int key, Node* node);
    void show() const;

private:
    void show(Node* node) const;

private:
    Node * m_root = nullptr;
};