// #include<iostream> - no
#include"Queue.h"
#include"Node.h"
using namespace std;


void Queue::push(int key)
{
	if (begin == nullptr)
	{
		begin = new Node;
		end = begin;
		begin->key = key;
	}
	else if (begin != nullptr)
	{
		end = new Node;
		end->prev = begin;
		begin->next = end;
		end->key = key;
	}
	else
	{
		Node* h = end;
		end = new Node;
		end->prev = h;
		h->next = end;
		end->key = key;
	}
}
void Queue::pop()
{
	if (begin != nullptr)
	{
		Node* t = begin;
		begin = begin->next;
		delete t;
	}
}

int Queue::front() const
{
	if (begin != nullptr)
	{
		return begin->key;
	}
	else
	{
		return 0;
	}
}

int Queue::back() const
{
	if (end != nullptr)
	{
		return end->key;
	}
	else
	{
		return 0;
	}
}

int Queue::size() const
{
	int count = 0;
	Node* k = begin;
	while (k != nullptr)
	{
		++count;
		k = k->next;
	}
	return count;
}

//std::vector<int> Queue::DebugTraverse() const
// {
//	Node* h = begin;
//	while (h != nullptr)
//	{
//		DebugTraverse().push_back(h->key);
//		h = h->next;
//	}
//	return std::vector<int>();
// }

Queue::~Queue()
{
	Node* iter = begin;
	while (iter)
	{
		Node* nextIter = iter->next;
		delete iter;
		iter = nextIter;
	}
}



