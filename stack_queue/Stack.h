#pragma once

// Стек - динамічна структура даних, що представляє із
// себе упорядкований набір елементів, в якій додавання нових
// елементів і видалення існуючих проводиться з одного кінця,
// званого вершиною стека.

// Діє принцип LIFO (Last In First Out) або «останній прийшов перший пішов»
class Stack
{
private:
	int* data;
	int size;

public:
	Stack() : size(0), data(nullptr) { }
	~Stack()
	{
		delete[] this->data;
	}

	void Push(int item);
	int Pop();

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
		return this->data[size - 1];
	}
};

