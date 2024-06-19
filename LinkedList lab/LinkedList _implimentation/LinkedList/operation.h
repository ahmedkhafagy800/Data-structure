#pragma once
#include<iostream>
#include"Node.h"
#include"operation.h"
#include<iostream>
#include"assert.h"
#include<stack>
using namespace std;
class operation
{
	void undo();
	int pos;
	node* item;      
	string op;
public:
	operation(int, node*, string);

};

