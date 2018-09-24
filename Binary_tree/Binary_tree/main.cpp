#include"Node.h"
#include"Tree.h"
#include<iostream>

using namespace std;

int main()
{

    Tree* tree = new Tree;
    tree->insert(10);
    tree->insert(15);
    tree->insert(5);
    tree->insert(1);
    tree->insert(7);
    tree->insert(20);
    tree->insert(25);
    tree->insert(12);
    tree->insert(9);
    

    tree->show();
    
    system("pause");
    return 0;
}