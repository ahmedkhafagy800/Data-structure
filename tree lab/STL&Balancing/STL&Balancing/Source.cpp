#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<unordered_set>  //use it to make set not be ordered
using namespace std;
int main()
{
	vector<pair<string, string>>v;  

	//-------------- SET -----------------
	/*
	unordered_set <string>s;             //set is an ordered by default (sort by alph)      unordered not cout as my input but print as hash
	s.insert("tawfik");
	s.insert("nader");
	s.insert("ahmed");
	s.insert("khafagy");
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}

	*/
	cout << "########################################" << endl;

	    //-------------- MAP -----------------

	/*
 	map<string, int>m;                              //we can use multimap to use key more than once to update data of it

	m.insert(make_pair("ahmed", 20));                //begin   WAY 1 TO INSERT


	m.insert({ "ali", 22 });                        //instead of make_pair  WAY 2 TO INSERT 


	m.insert({ "hamoksha", 1 });

	m.insert(make_pair("ahmed", 24));                //use it ONLY with MULTI_MAB
	
	if (m.find("ali") == m.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found" << endl;
	}




	cout << "########################################" << endl;




	if (m.empty())
	{
		cout << "empty" << endl;
	}
	cout << "not empty" << endl;




	cout << "########################################" << endl;


	cout<<m.at("ahmed")<<endl;


	cout << "########################################" << endl;


	m.erase("ali");
	if (m.find("ali") == m.end())
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found" << endl;
	}




	cout << m["ahmed"];                                 //<<< WAY 1 TO COUT

	

	multimap<string, int>::iterator it;                //<<<< WAY 2 TO COUT    we can replace this line by auto it in for loop
	
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " is " << it->second << endl;
	}
	
	*/
	

	/*    -------------- PAIR -----------------
	 
	
	pair<string, string>p("ahmed", "programmer");
	cout << p.first << " is " << p.second << endl;
	v.push_back(make_pair("ahmed", "programmer"));
	v.push_back(make_pair("mo", "Eng"));
	v.push_back(make_pair("sal", "Doc"));
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " is " << v[i].second << endl;
	}

	*/
}