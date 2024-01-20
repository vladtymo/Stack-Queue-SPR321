#include "Stack.h"

void Stack::Push(int item)
{
	// add item to the end
	int* newArr = new int[size + 1];
	for (size_t i = 0; i < size; i++)
		newArr[i] = data[i];

	newArr[size] = item;
	++size;

	if (data != nullptr)
		delete[] data;
	data = newArr;
}

int Stack::Pop()
{
	if (IsEmpty()) return 0; // throw Exception

	// remove the last item
	int last = data[size - 1];
	--size;
	return last;
}