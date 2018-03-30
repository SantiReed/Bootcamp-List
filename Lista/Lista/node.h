#ifndef NODE_H
#define NODE_H

class node
{
	public:
		void *data;
		class node *previous;
		class node *next;
} ;

class list
{
	public: 
		node *last;
		node *current;
		int numberOfNodes;
		int position;
};

void error();

node *newNode();

void initialize (list *lcde);

void addElement (int n, int *e, list *lcde);

#endif