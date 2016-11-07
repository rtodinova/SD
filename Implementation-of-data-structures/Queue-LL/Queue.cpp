#include<cassert>
template<typename T>
struct Node
{
	T data;
	Node<T>* next;
	Node<T>* previous;
	Node(const T& _data)
	{
		data = _data;
		next = NULL;
		previous = NULL;
	}
};

template<typename T>
class Queue {
private:
	Node<T>* pFirst;
	Node<T>* pLast;
	int size;
public:
	bool isEmpty() const { return size == 0; }
	void enqueue(T& data)
	{
		Node<T>* newNode = new Node<T>(data);
		if (!isEmpty())
		{
			pLast->previous = newNode;
			newNode->next = pLast;
			newNode->previous = NULL;
			this->pLast = newNode;
		}
		else
		{
			this->pLast = newNode;
			this->pFirst = newNode;
		}
	}

	void dequeue()
	{
		if (isEmpty())
		{
			cout << "The queue is empty!" << endl;
		}
		else
		{
			Node<T>* temp = pFirst;
			pFirst = pFirst->next;
			delete temp;
			size--;
		}
	}
};
