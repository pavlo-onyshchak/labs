#include<iostream>
using namespace std;
struct Node
{
	Node*prev = NULL;
	Node*next = NULL;
	int key;

};
struct Queue
{
	Node*begin = NULL;
	Node *end = NULL;
};
void push(Queue* queue, int key)
{
	if (queue->begin == NULL)
	{
		queue->begin = new Node;
		queue->end = queue->begin;
		queue->begin->key = key;
		return;
	}
	if (queue->begin == queue->end)
	{
		queue->end = new Node;
		queue->end->prev = queue->begin;
		queue->begin->next = queue->end;
		queue->end->key = key;
		queue->end->next = NULL;
	}
	else
	{
		Node*h = queue->end;
		queue->end = new Node;
		queue->end->prev = h;
		h->next = queue->end;
		queue->end->key = key;
		queue->end->next = NULL;
	}
}
void pop(Queue*queue)
{
	if (queue->begin == NULL)
	{
		return;
	}
	else
	{
		Node*t = queue->begin;
		queue->begin = queue->begin->next;
		delete t;
	}
}

void front(Queue*queue)
{
	if (queue->begin != NULL)
	{
		cout << queue->begin->key << endl;
	}
	else
	{
		cout << "the queue is empty" << endl;
	}
}

void back(Queue*queue)
{
	if (queue->end != NULL)
	{
		cout << queue->end->key << endl;
	}
	else
	{
		cout << "queue is empty" << endl;
	}
}

void size(Queue*queue)
{
	int amount;
	Node*k = queue->begin;
	for (int i = 1; k != NULL; i++)
	{
		amount = i;
		k = k->next;
	}
	cout << amount << endl;
}

void Traverse(const Queue*queue)
{
	Node* h;
	h = queue->begin;
	while (h != NULL)
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
