#include<iostream>
#include<vector>
using namespace std;

class course
{
public:
	string name;
	int stud_num;
};

int main()
{
	vector<course>v;

	int input;
	do
	{
		course s;
		cout << "1- add course" << endl;
		cout << "2- Display total num of students" << endl;
		cout << "3- Exit" << endl;
		cin >> input;


		if (input == 1)
		{
			cout << "Enter course name and num of studs" << endl;
			cout << "Enter course name : ";
			cin >> s.name;
			cout << "Enter num of students : ";
			cin >> s.stud_num;
			cout << endl;
			cout << endl;
			v.push_back(s);
		}
		else if (input == 2)
		{
			int total = 0;
			for (int i = 0; i < v.size(); i++)
			{
				total += v[i].stud_num;
			}
			cout << "num of student is : " << total << endl;
		}



	} while (input != 3);


}