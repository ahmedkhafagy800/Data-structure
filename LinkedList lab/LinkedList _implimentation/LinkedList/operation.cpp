#include "LinkedList.h"
#include"Node.h"
#include"operation.h"
#include<iostream>
#include"assert.h"
using namespace std;
operation::operation(int pos, node* item, string op)
{
	this->item = item;
	this->op = op;
	this->pos = pos;
}
