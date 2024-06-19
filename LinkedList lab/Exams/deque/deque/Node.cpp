#include"Node.h"
#include"deque.h"
template<class t>
Node<t>::Node(t val)
{
	post = pre = nullptr;
	value = val;
}
