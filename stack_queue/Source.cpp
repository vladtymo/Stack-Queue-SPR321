#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack st;

	st.Push(10);
	st.Push(77);
	st.Push(19);

	cout << "Top item:" << st.Peek() << endl; // 19

	while (!st.IsEmpty())
	{
		cout << "Next item:" << st.Pop() << endl;
	}

	system("pause");
	return 0;
}