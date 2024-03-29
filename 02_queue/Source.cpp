#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q;

	cout << "Items: ";
	for (size_t i = 0; i < 5; i++)
	{
		int value = rand() % 10;
		q.Enqueue(value);
		cout << value << " ";
	}
	cout << endl;

	cout << "Top item:" << q.Peek() << endl;

	while (!q.IsEmpty())
	{
		cout << "Next item:" << q.Dequeue() << endl;
	}

	system("pause");
	return 0;
}