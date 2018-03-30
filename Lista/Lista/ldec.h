#include "node.h"
#include "iostream"

using namespace std;

#ifndef LDEC_H
#define LDEC_H


void error ()
{
	cout << "Insufficient memory" << endl;
}

node *newNode ()
{
	node *q = (node *)malloc(sizeof(node));
	if (!q) error();
	return q;
}

void initialize (list *lcde)
{
	lcde -> last = lcde -> current = NULL;
	lcde -> numberOfNodes = 0;
	lcde -> position = -1;
}

void addElement (int *e, list *lcde)
{
	node *last = lcde->last;
	node *actual = lcde->current;
	int numberOfNodes = lcde->numberOfNodes;
	int position = lcde->position;

	node *q = NULL;

	if (last == NULL)
	{
		last = newNode();
		last->previous = last;
		last->next=last;
		last->data =e;
		current=last;
		position=0;
	}
	else
	{
		node *q = newNode();

		current->next->previous=	q;
		q->next = current->next;
		current->next=q;
		q->previous = current;
		q->data=e;

		position++;

		if (current == last)
		{
			last = q;
		}
		last = q;
	}
	numberOfNodes++;

	lcde->last=last;
	lcde->current=current;
	lcde->numberOfNodes=numberOfNodes;
	lcde->position=position;
	
}



#endif