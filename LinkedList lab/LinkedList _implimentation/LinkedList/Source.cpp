#include<iostream>
#include"assert.h"
#include"LinkedList.h"
#include"Node.h"
#include"operation.h"
using namespace std;
int main()
{
	LinkedList l;
	l.append(1);
	l.append(2);
	l.append(3);
	cout <<"length of LinkedList is : "<< l.lengthf() << endl;
	cout << "the elements of LinkedList are : " << endl<<endl;
	l.display();
	l.insertAt(5, 1);
	cout << "length of LinkedList is : " << l.lengthf() <<endl;
	cout << "the elements of LinkedList are after 1st change : " << endl << endl;
	l.display();
	l.deleteAt(0);
	cout << "length of LinkedList is : " << l.lengthf() << endl;
	cout << "the elements of LinkedList are after 2nd change : " << endl << endl;
	l.display();
}