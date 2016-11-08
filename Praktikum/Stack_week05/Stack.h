#pragma once
#include<queue>
using namespace std;

class MyStack {
	queue<double> my_stack;
public:
	void push(double& elem);
	void pop();
	double tos() const { return my_stack.back(); }
	bool isEmpty() const { return my_stack.empty(); }
};

