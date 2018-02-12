#pragma once
#include "Node.h"
#include <vector>

class Queue
{
public:
	~Queue();

	void push(int key);
	void pop();

	int front() const;
	int back() const ;
	int size() const;

	/*std::vector<int> DebugTraverse() const;*/
private:
	Node* begin = nullptr;
	Node* end = nullptr;
};
