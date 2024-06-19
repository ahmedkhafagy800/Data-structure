#include<iostream>
#include<queue>
#include<deque>
using namespace std;
void play()
{
	queue<int>q;
	queue<int>input;
	int num = 0;
	int front = -1;
	int back = -1;
	cout << "Enter the number to save the numbers in queue but not zero : ";
	cin >> num;
	while (num != 0)
	{
		cout << "Enter the number : ";
		cin >> num;
		input.push(num);
	}
	while(input.front() != 0)
	{
		for (int i = 0; i < input.front() ; i++)
		{
			q.push(i + 1);
		}

		while (q.size() >= 2)
		{
			cout << q.front() << "  ";
			q.pop();
			q.push(q.front());
			q.pop();
		}
		input.pop();
		cout << endl;
		cout << endl;
	}
	
}
int main()
{
	play();
}


