#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include<iostream>

using namespace std;

template<typename T>
struct Element{
	T data;
	Element<T>* next;
	Element(const T& other)
	{
		data = other;
		next = NULL;
	}
};

template<typename T>
class LinkedStack{
private:
	Element<T>* top;
	void copy(const LinkedStack<T>&);
	void destroy();
public:
	LinkedStack();
	~LinkedStack();
	LinkedStack(const LinkedStack<T>&);
	LinkedStack<T>& operator=(const LinkedStack<T>&);
	T top_element();
	void push(const T&);
	void pop();
	bool isEmpty() const;
	void init();
};

#endif LINKEDSTACK_H
