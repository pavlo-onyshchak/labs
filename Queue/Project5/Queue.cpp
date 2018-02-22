#include"Queue.h"
Queue::Queue()
{
	arr = new int[5];
    capacity = 5;
	size = 0;
}
void Queue::push(int variable)
{
	if (size == capacity)
	{
		check();
		arr[size] = variable;
		size++;
	}
	else
	{
		arr[size] = variable;
		size++;
	}

}
void Queue::pop()
{
	if (size < 1)
	{
		return;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
	}
}
void Queue::check()
{
	int* arr_tmp = new int[capacity + 5];
	capacity += 5;
	for (int i = 0; i < size; ++i)
	{
		arr_tmp[i] = arr[i];
	}
	arr = arr_tmp;
	delete arr_tmp;
}
int Queue::front()const
{
	if (size != 0)
	{
		return arr[0];
	}
	else
	{
		return 0;
	}
}
int Queue::back()const
{
	if (size > 0)
	{
		return arr[size - 1];
	}
	else
	{
		return 0;
	}

}
