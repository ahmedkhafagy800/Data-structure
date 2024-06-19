#pragma once
template<class t>
class Node
{
public:
	Node<t>* post;
	Node<t>* pre;
	t value;
	Node(t);



};