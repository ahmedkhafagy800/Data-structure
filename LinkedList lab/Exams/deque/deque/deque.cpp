#include "deque.h"
#include"Node.h"
#include"cassert"
template<class t>

deque<t>::deque()
{
	front = back = nullptr;
	length = 0;
};
template<class t>
void deque<t>::push_front(t val)
{
	Node<t>* n = new Node<t>(val);
	if (length == 0)
	{
		front = back = n;
	}
	else
	{
		n->post = front;
		front->pre = n;
		front = front->pre;
	}
	length++;
}
template<class t>
void deque<t>::pop_back()
{
	assert(length > 0);
	if (length == 0)
	{
		front = back = 0;
	}
	else if()
}