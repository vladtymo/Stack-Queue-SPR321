#pragma once

// FIFO - first in, first out
class Queue
{
private:
	enum { FIRST = 0 };
	int* data;
	int size;

public:
	Queue() : size(0), data(nullptr) { }
	~Queue()
	{
		delete[] this->data;
	}

	void Enqueue(int item);
	int Dequeue();

	bool IsEmpty() const
	{
		return size <= 0;
	}

	int GetCount() const
	{
		return this->size;
	}
	int Peek() const
	{
		return this->data[FIRST];
	}
};


