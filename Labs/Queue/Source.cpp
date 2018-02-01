#include<iostream>

using namespace std;

struct Node
{
	Node* prev = nullptr;
	Node* next = nullptr;
	int key;

};

struct Queue
{
	Node* begin = nullptr;
	Node* end = nullptr;
};

void push(Queue* queue, int key)
{
	if (queue->begin == nullptr)
	{
		queue->begin = new Node;
		queue->end = queue->begin;
		queue->begin->key = key;
	}
	else if (queue->begin == queue->end)
	{
		queue->end = new Node;
		queue->end->prev = queue->begin;
		queue->begin->next = queue->end;
		queue->end->key = key;
	}
	else
	{
		Node* h = queue->end;
		queue->end = new Node;
		queue->end->prev = h;
		h->next = queue->end;
		queue->end->key = key;
	}
}
void pop(Queue* queue)
{
	if (queue->begin != nullptr)
	{
		Node* t = queue->begin;
		queue->begin = queue->begin->next;
		delete t;
	}
}

void front(Queue* queue)
{
	if (queue->begin != nullptr)
	{
		cout << queue->begin->key << endl;
	}
	else
	{
		cout << "the queue is empty" << endl;
	}
}

void back(Queue* queue)
{
	if (queue->end != nullptr)
	{
		cout << queue->end->key << endl;
	}
	else
	{
		cout << "queue is empty" << endl;
	}
}

void size(Queue* queue)
{
	int count = 0;
	Node* k = queue->begin;
	while (k != nullptr)
	{
		++count;
		k = k->next;
	}

	cout << count << endl;
}

void Traverse(const Queue* queue)
{
	Node* h = queue->begin;
	while (h != nullptr)
	{
		cout << h->key;
		h = h->next;
	}
}


int main()
{
	cout << endl;
	system("pause");
	return 0;
}
