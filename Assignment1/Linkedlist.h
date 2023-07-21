#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include"Node.h"	
#include<bits/stdc++.h>
using namespace std;
class Linkedlist
{
protected:
	Node* Head;
	Node* Tail;
public:
	Linkedlist() { Head = Tail = NULL; }
	// Constructor
	~Linkedlist() { clear(); }
	void insertNode(Customer* cus);
	void output(int x,int y,int z);
	void clear();
};



#endif