#define _CRT_SECURE_NO_WARNINGS
#include<Windows.h>
#include <iostream>
#include <string>
#include<conio.h>
#include "Client.h"
#include "Printer.h"
using namespace std;

int main()
{
	//int max_request = 0;
	//while (1)
	//{
	//	system("cls");
	//	cout << "Enter max number of requests:";
	//	cin >> max_request;
	//	if (max_request > 0)
	//		break;
	//}
	//cin.ignore();
	//system("cls");
	//char choice = 0;
	//Client temp;
	//Printer<Client>print(max_request);
	//while (choice != 27)
	//{
	//	cout << "-----------------------------\n1. Send a print request.\n-----------------------------\n-----------------------------\n2. Print.\n-----------------------------\n-----------------------------\n3. Show all requests.\n-----------------------------\n-----------------------------\n4. Clear all queue\n-----------------------------\n-----------------------------\nEsc. Exit.\n-----------------------------\n\n\n\n\n\n-------------------------------------\nMaximum number of requests: " << max_request <<"\n-------------------------------------" << endl;
	//	cout << "-------------------------------------\n";
	//	cout << "Number of requests: " << print.GetCount()<<endl;
	//	cout << "-------------------------------------\n";
	//	cout << "\n\n" << endl;
	//	choice = _getch();
	//	switch (choice)
	//	{
	//	case'1':
	//		system("cls");
	//		print.Add();
	//		system("cls");
	//		break;
	//	case'2':
	//		system("cls");
	//		if (print.GetCount() != 0)
	//		{
	//			temp = print.Extract();
	//			cout << temp << endl;
	//		}
	//		else
	//			cout << "Queue is empty" << endl;
	//		system("pause>>NULL");
	//		system("cls"); 
	//		break;
	//	case'3':
	//		system("cls");
	//		print.Show();
	//		system("pause>>NULL");
	//		system("cls");
	//		break;
	//	case'4':
	//		print.Clear();
	//		system("cls");
	//		break;
	//	case 27:
	//		system("cls");
	//		cout << "The program has finished running!" << endl;
	//		system("pause>>NULL");
	//		break;
	//	default:
	//		system("cls");
	//		cout << "Error! This variant is not exist." << endl;
	//		system("pause>>NULL");
	//		system("cls");
	//		break;
	//	}
	//}
	//system("cls");
	//
	time_t t;
	while (1)
	{
		t = (time_t)time(0);
		system("cls");
		cout << puts(ctime(&t));
		Sleep(50);
	}
}

