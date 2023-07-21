#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include"Customer.h"
#include<bits/stdc++.h>
using namespace std;

class Node
{
	friend class Linkedlist;
private:
	Customer* data;
	Node* next;
public:
	Node(Customer* cus) : data(cus), next(NULL) {};
	


};


#endif