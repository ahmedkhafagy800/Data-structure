#include"Node.h"
#include"operation.h"
#include<iostream>
#include"assert.h"
#include<stack>

class LinkedList
{
public:
	node* head;
	node* tail;
	int length;
	stack<operation>ops;

	LinkedList();
	void append(int); //undodable
	void insertAt(int, int); //undodable
	void deleteAt(int); //undodable
	int lengthf(); 
	void display();
	int at(int); 
	void move_node(int, int); //undodable
	void undo();
};