#include"Node.h"
#include"Tree.h"
#include<iostream>

using namespace std;




void Tree::insert(int key, Node * node)
{
    if (key < node->key) {
        if (node->left != nullptr) {
            insert(key, node->left);
        }
        else {
            node->left = new Node(key);
            node->left->left =nullptr;
            node->left->right = nullptr;
        }
    }
    else if (key >= node->key) {
        if (node->right != nullptr) {
            insert(key, node->right);
        }
        else {
            node->right = new Node(key);
            node->right->right = nullptr;
            node->right->left = nullptr;
        }
    }

}


void Tree::insert(int key)
{
    if (m_root != nullptr)
    {
        insert(key, m_root);
    }
    else
    {
        m_root = new Node(key);
        m_root->left = nullptr;
        m_root->right = nullptr;
    }
}



void Tree::show() const
{
    show(m_root);
}

void Tree::show(Node* node) const
{
    if (!node)
    {
        return;
    }

    cout << node->key << endl;
    show(node->left);
    show(node->right);
    

}
