#include <iostream>
#include "CircularQueue.h"
using namespace std;

int main()
{
	CircularQueue q;

	cout << "Items: ";
	for (size_t i = 0; i < 5; i++)
	{
		int value = rand() % 10;
		q.Enqueue(value);
		cout << value << " ";
	}
	cout << endl;

	cout << "Top item:" << q.Peek() << endl;
	cout << "Queue size: " << q.GetCount() << endl;

	for (size_t i = 0; i < 30; i++)
	{
		cout << "Next item:" << q.Dequeue() << endl;
	}
	cout << "Queue size: " << q.GetCount() << endl;

	system("pause");
	return 0;
}