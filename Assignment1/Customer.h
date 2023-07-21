#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;

class Customer
{
private:
	string name;
	int quantity;
	double money;

public:
	Customer(const string& Iname = "", int Iquantity = 0, double Imoney = 0) : name(Iname), quantity(Iquantity), money(Imoney) {};
	virtual ~Customer() {};
	virtual double calmoneyTotal() = 0;
	string getname() { return name; }
	int getquantity() { return quantity; }
	double getmoney() { return money; }
};


class CustomerA : public Customer
{
public:
	CustomerA(string Iname, int Iquantity, double Imoney) : Customer(Iname, Iquantity, Imoney) {};
	virtual double calmoneyTotal() override
	{
		return getquantity() * getmoney() * (1 + 0.1);
	}
};

class CustomerB : public Customer
{
private:
	int usageyear;
	double discount;

public:
	CustomerB(string Iname, int Iquantity, double Imoney, int Iusageyear) : Customer(Iname, Iquantity, Imoney), usageyear(Iusageyear) {
		discount = usageyear * 0.05;
		if (discount > 0.5) {
			discount = 0.5;
		}
	};
	virtual double calmoneyTotal() override
	{
		return (getquantity() * getmoney()) * (1 - discount) * (1 + 0.1);
	}
	int getusageyear() { return usageyear; }
	
};

class CustomerC : public Customer
{
public:
	CustomerC(string Iname, int Iquantity, double Imoney) : Customer(Iname, Iquantity, Imoney) {};
	virtual double calmoneyTotal() override
	{
		return getquantity() * getmoney() * 0.5 * (1 + 0.1);
	}
};
#endif