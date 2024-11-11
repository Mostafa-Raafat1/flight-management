#pragma once
#include <iostream>
using namespace std;
class Passenger
{
public:
	string name;
	string ID;
	static int total_pass;
public:
	Passenger(string n, string id) { name = n, ID = id, total_pass++; }
	static int total_passangers() { return total_pass; }
	friend istream& operator>>(istream& is, Passenger& p);
	~Passenger() {
		total_pass--;
		cout << "A paassanger is removed...\n";
	}
	void print();
};
int Passenger::total_pass = 0;
