#include"Linkedlist.h"

void Linkedlist::insertNode(Customer* cus)
{
	Node* newNode = new Node(cus);
	if (Head == nullptr) {
		Head = newNode;
	}
	else {
		Node* current = Head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}

}

void Linkedlist::output(int x, int y, int z)
{
	ofstream f;
	f.open("dataoutput.txt");
	if (f.fail())
	{
		cout << "Can't open the file !" << endl;
		return;
	}
	else
	{	
		f << x << " " << y << " " << z << endl;
		for (Node* p = Head; p != NULL; p = p->next)
		{
			Customer* customer = p->data;
			f << "Name: " << customer->getname() << endl;
			f << "Money have to pay : " << customer->calmoneyTotal() << endl;
		}
	}
	
	f.close();
}

void Linkedlist::clear() {
	Node* current = Head;
	while (current != NULL) {
		Node* temp = current;
		current = current->next;
		delete temp->data;
		delete temp;
	}
	Head = NULL;
}
