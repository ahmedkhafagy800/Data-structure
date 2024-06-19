#include "LinkedList.h"
#include"Node.h"
#include"operation.h"
#include<iostream>
#include"assert.h"
using namespace std;



LinkedList::LinkedList()
{
	head = tail = NULL;
	length = 0;
}

void LinkedList::append(int val)
{
	node* n = new node(val);
	if (length == 0)
	{
		head = tail = n;
	}
	else
	{
		tail->next = n;
		n = tail;
	}
	length++;
}

void LinkedList::insertAt(int val, int pos)
{
	node* n = new node(val);
	node* temp = head;
	assert(pos >= 0 && pos < length);
	if (pos == 0)
	{
		n->next = head;
		head = n;
	}
	else
	{

		for (int i = 0; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
	}
	length++;
}


void LinkedList:: deleteAt(int pos)
{
	node* temp = head;
	assert(pos >= 0 && pos < length);
	if (pos == 0)
	{
		head = head->next;
		delete temp;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++)
		{
			temp = temp->next;
			node* d = temp->next;
			temp->next = d->next;
			delete d;
		}
	}
	length--;
}

int LinkedList::lengthf()
{
	return length;
}

void LinkedList:: display()
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}

}

void LinkedList::move_node(int val, int pos)
{
	node* temp = head;
	int i = 0;
	while (temp != NULL && temp->data != val)
	{
		if (temp->data == val)
		{
			break;
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	deleteAt(i);
	insertAt(val, pos);
}

int LinkedList::at(int pos)
{
	node* n = head;
	for (int i = 0; i < pos ; i++)
	{
		n = n->next;
	}
	return n->data;
}



