#include"Customer.h"
#include"Linkedlist.h"


int main()
{
	Linkedlist cus;
	ifstream f;
	f.open("datainput.txt");
	int x, y, z;
	f >> x >> y >> z;
	f.ignore();
	for (int i = 0; i < x; i++)
	{
		string name;
		int quantity;
		double money;
		f.ignore();
		getline(f, name);
		f >> quantity >> money;
		cus.insertNode(new CustomerA(name, quantity, money));

	}
	for (int i = 0; i < y; i++)
	{
		string name;
		int quantity, usageyear;
		double money;
		f.ignore();
		getline(f, name);
		f >> quantity >> money >> usageyear;
		cus.insertNode(new CustomerB(name, quantity, money, usageyear));		
	}
	for (int i = 0; i < z; i++)
	{
		string name;
		int quantity;
		double money;
		f.ignore();
		getline(f, name);
		f >> quantity >> money;
		cus.insertNode(new CustomerC(name, quantity, money));
	}
	f.close();
	cus.output(x,y,z);
	cus.clear();
	return 0;
}