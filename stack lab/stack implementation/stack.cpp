#include<iostream>
using namespace std;
const int SIZE = 100;
class stack
{
	int top;
	int ArrayStack[SIZE];

public:
	stack()
	{
		top = -1;
	}

	void push(int Element)
	{
		if (top >= SIZE - 1)
		{
			cout << "the stack is full" << endl;
		}
		else
		{
			top++;
			ArrayStack[top] = Element;
		}
	}

	bool isEmpty()
	{
		return top < 0;
	}

	void pop()
	{
		if (isEmpty())
		{
			cout << "your stack is full" << endl;
		}
		else
		{
			top--;
		}
	}

	void pop(int& Element)
	{
		if (isEmpty())
		{
			cout << "your stack is full" << endl;
		}
		else
		{
			Element = ArrayStack[top];
			top--;
		}
	}

	void topElement(int& topElement)
	{
		if (isEmpty())
		{
			cout << "your stack is full" << endl;
		}
		else
		{
			topElement = ArrayStack[top];
			cout << "the top element is " << topElement << endl;
		}


	}

	void print()
	{
		cout << "[";
		for (int i = top; i >= 0; i--)
		{
			cout << ArrayStack[i] << "  ";
		}
		cout << "]";
	}


};




int main()
{

	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	int y = 0;
	/*
	s.print();
	cout << endl;
	cout << "########## #############" << endl;
	s.topElement(y);
	cout << y;
	cout << endl;
	cout << "########## #############" << endl;
	*/
	s.pop();
	s.print();
	cout << endl;
	cout << "########## #############" << endl;
	s.pop(y);
	cout << y << endl;
	cout << "###########  ###############" << endl;
	s.print();





}