#include"Queue.h"
#include<iostream>

using namespace std;

/////////////  CHECK ALL NEXT POINTER IN EVERY FUNCTION!!!!!/////////

void Queue::push(string key, int priority)
{
    if (m_begin == nullptr)
    {
        Node* node = new Node(key, priority);
        m_begin = node;
        return;
    }

    if (priority < m_begin->priority)
    {
        Node* node = new Node(key, priority);
        node->next = m_begin;
        m_begin = node;
        return;
    }
   /* else if (priority == m_begin->priority)
    {
            Node* node = new Node(key, priority);
            node = m_begin->next;
            m_begin->next = node;
    }*/


    if (m_begin->next == nullptr)
    {
        Node* node = new Node(key, priority);
        m_begin->next = node;
        return;
    }


    Node* ptr = m_begin;
    Node* ptr_next = ptr->next;
    bool inserted = 0;
    for(; ptr_next != nullptr; ptr = ptr_next, ptr_next = ptr_next->next)
    {
        if (priority >= ptr->priority && priority < ptr_next->priority)
        {
            Node* node = new Node(key, priority);
            ptr->next = node;
            node->next = ptr_next;
            inserted = true;
            break;
        }
    }

    if (!inserted)
    {
        ptr->next = new Node(key, priority);
    }
}

void Queue::pop()
{
   
    if (m_begin == nullptr)
    {
        return;
    }

     m_begin = m_begin->next;
}

int Queue::size() const
{
    int size = 0;
    Node* ptr = m_begin;

    for (; ptr!= nullptr; ptr = ptr->next)
    {
        size += 1;
    }

    return size;
}

void Queue::show() const
{
    Node* ptr = m_begin;
    for (; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->key << endl;
    }
}
