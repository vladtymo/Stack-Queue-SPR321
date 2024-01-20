#pragma once

// FIFO - first in, first out
class CircularQueue
{
private:
	enum { FIRST = 0 };
	int* data;
	int size;

public:
	CircularQueue() : size(0), data(nullptr) { }
	~CircularQueue()
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


