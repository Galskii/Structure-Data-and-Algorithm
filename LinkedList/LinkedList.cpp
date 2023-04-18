#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = head;
	head		   = newNode;
	
	if (tail == NULL)
	{
		tail = head;
	}
}

void LinkedList::insertAfter(int item, int input)
{
	Node *newNode	= new Node();
	newNode->value	= input;
	
	Node *tmp = head;
	while (tmp->value != item)
	{
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	tmp->next	  = newNode;
}

void LinkedList::insertToTail(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = NULL;
	tail->next	   = newNode;
	tail		   = newNode; 
}

void LinkedList::deleteFromHead()
{
	Node *delNode = head;
	head = head->next;
	delete delNode;
}

void LinkedList::deleteByValue(int input)
{
	Node *delNode;
	Node *tmp = head;
	
	if (input == head->value)
	{
		head = head->next;
		delete tmp;
	}
	else{
		Node *tmpr = head;
		Node *tmp = head->next;
		
		while (tmp->value != input)
		{
			tmpr = tmp;
			tmp = tmp->next;
		}
		tmpr->next = tmp->next;
		delete tmp;
	}
}

void LinkedList::deleteFromTail()
{
	Node *tmp = head;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	Node *delNode = tmp->next;
	tail = tmp;
	tail->next = NULL;
	delete delNode;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp != NULL){
		cout << tmp->value;
		if (tmp->next != NULL)
		{
			cout << "->";
		
		}else{
			
			cout << " ";
		}
		tmp = tmp->next;
	}
	cout << endl;
}