#define _CRT_SECURE_NO_WARNINGS
#include "Client.h"
#include <iostream>
#include <string>

using namespace std;
Client::Client(int)
{
	name = "name";
	request = "request";

}
istream& operator>>(istream& in, Client& client)
{
	cout << "Enter name:";
	getline(in, client.name);
	cout << "Enter request:";
	getline(in, client.request);
	return in;
}
ostream& operator<<(ostream& out, Client& client)
{
	
	client.t = (time_t)time(0);
	cout << "\n-----------------------------------" << endl;
	out << client.name << endl;
	cout << "-----------------------------------" << endl;
	cout << "-----------------------------------" << endl;
	out << client.request << endl;
	cout << "-----------------------------------" << endl;
	cout << "-----------------------------------" << endl;
	cout << puts(ctime(&client.t)) << endl;
	cout << "-----------------------------------" << endl;

	return out;
}
