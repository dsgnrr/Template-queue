#pragma once
#include <iostream>
using namespace std;

class Client
{
	string name;
	string request;
	time_t t;
public:
	Client() = default;
	Client(int);
	Client(string n, string r) :name(n), request(r) {}
	friend istream& operator>>(istream& in, Client& client);
	friend ostream& operator<<(ostream& out, Client& client);
};
