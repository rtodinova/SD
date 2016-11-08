#include"Header.h"
#include<queue>
#include<iostream>
using namespace std;

void MyStack::push(double& elem)
{
	my_stack.push(elem);
}

void MyStack::pop()
{
	if (!isEmpty())
	{
		double temp;
		for (int i = 0; i < my_stack.size() - 1; i++)
		{
			temp = my_stack.front();
			my_stack.pop();
			my_stack.push(temp);
		}
		my_stack.pop();
	}
	else
	{
		cout << "EMPTY" << endl;
	}
}
