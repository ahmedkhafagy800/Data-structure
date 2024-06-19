#pragma once
template<class t>
class deque
{
	Node<t>* front;
	Node<t>* back;
	int length;

public:
	deque();
	void push_front(t);
	void pop_back();
};


