#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
private:
	struct ListNode
	{
		T value;
		struct ListNode *next;
	};
	
		ListNode *head;

public:
	NumberList()
	{ head = nullptr; }

	~NumberList();

	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	void displayList() const;
};


template <class T>
void LinkedList<T>::appendNode(T newValue)
{
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode_>next = nullptr;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
				}

template <class T>
void LinkedList<T>::displayList()
{
	ListNode *nodePtr;

	nodePtr = head;

	while (nodePtr)
	{
	cout << nodePtr->value << endl;

	nodePtr = nodePtr->next;
	}
}