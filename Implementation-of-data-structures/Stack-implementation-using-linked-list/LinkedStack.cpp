#include<iostream>
#include"LinkedStack.h"

using namespace std;

template<typename T>
void LinkedStack<T>::init()
{
	this->top = NULL;
}

template<typename T>
void LinkedStack<T>::copy(const LinkedStack<T> &other)
{
	this->top = other->top;
}

template<typename T>
void LinkedStack<T>::destroy()
{
	this->top = NULL;
}

template<typename T>
LinkedStack<T>::LinkedStack()
{
	init();
}

template<typename T>
LinkedStack<T>::LinkedStack(const LinkedStack<T> &other)
{
	init();
	copy(other);
}

template<typename T>
LinkedStack<T>::~LinkedStack()
{
	destroy();
}

template<typename T>
LinkedStack<T>& LinkedStack<T>::operator=(const LinkedStack<T> &other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

template<typename T>
T top_element()
{
	if (isEmpty()) cout << " The stack is empty " << endl;
	return top->data;
}

template<typename T>
void LinkedStack<T>::push(const T& element)
{
	Element<T>* temp = new Element<T>(element);
	temp->next = top;
	top = temp;
}

template<typename T>
void LinkedStack<T>::pop()
{
	if (isEmpty())
	{
		throw "Empty Stack";
	}

	Element<T>* next = top->next;
	delete top;
	top = next;
}

template<typename T>
bool LinkedStack<T>::isEmpty() const
{
	return top == NULL;
}

