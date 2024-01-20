#include "CircularQueue.h"

// add new item to the end
void CircularQueue::Enqueue(int item)
{
	// create new array
	int* newArr = new int[size + 1];
	// copy existing items
	for (size_t i = 0; i < size; i++)
		newArr[i] = data[i];

	// set new item value
	newArr[size] = item;
	// increase size
	++size;

	// delete previous array
	if (data != nullptr)
		delete[] data;

	// replace previous array with the new one
	data = newArr;
}

// remove item from the beginning
int CircularQueue::Dequeue()
{
	if (IsEmpty()) return 0; // throw Exception

	// remove the last item
	int first = data[FIRST];

	// move items by one cell left
	for (size_t i = 1; i < size; i++)
		data[i - 1] = data[i];

	// set the first item to the end
	data[size - 1] = first;

	return first;
}
