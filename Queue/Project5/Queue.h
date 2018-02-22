#ifndef QUEUE_H
#define QUEUE_H
class Queue
{
private:
	int* arr;	
	int capacity;
	int size;
public:
	Queue();
	void push(int variable);
	void pop();
	void check();
	int front()const;
	int back()const;
	
	

};


#endif // !QUEUE_H

