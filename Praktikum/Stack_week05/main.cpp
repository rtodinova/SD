#include"Header.h"
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool brackets(string str)
{
	stack<char> br;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			br.push(str[i]);
		}
		if (str[i] == ')')
		{
			if (br.empty())
			{
				return false;
			}
			else br.pop();
		}
	}
		if (br.empty())
		{
			return true;
		}
		
		return false;

	}

int len(string str)
{
	stack<char> br;
	int count = 0;
	int max_count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			br.push(str[i]);
			count++;
			if (max_count < count) max_count = count;
		}
		if (str[i] == ')')
		{
			if (br.empty())
			{
				count = 0;
			}
			else
			{
				count++;
				if (max_count < count) max_count = count;
				br.pop();
			}
		}
	}
	
		return max_count;
}

int main()
{
	/*MyStack me;
	double a = 2.3, b = 4.5;
	me.push(a);
	cout << me.tos() << endl;
	me.push(b);
	cout << me.tos() << endl;
	me.pop();
	cout << me.tos() << endl;
	me.pop();
	if(me.isEmpty())
		cout<<"The stack is empty"<<endl;*/

	//cout << brackets("()()") << endl;
	cout << len("(()()))") << endl;
}
