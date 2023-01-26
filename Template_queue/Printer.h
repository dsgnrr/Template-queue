#pragma once
#include <iostream>
using namespace std;
template<class T>
class Printer
{
	int* Pri;
	T* Wait;
	int MaxQueueLength;
	int QueueLength;
public:
	Printer(int m);
	~Printer();
	void Add();
	T Extract();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Show();
};
template<class T>
void Printer<T>::Show() {
	if (QueueLength == 0)
	{
		cout << "Queue is empty" << endl;
	}
	for (int i = 0; i < QueueLength; i++) 
	{
		cout << Wait[i] << "\nPriority: " << Pri[i] << endl;
	}

}
template<class T>
Printer<T>::~Printer()
{
	delete[]Wait;
	delete[]Pri;
}
template<class T>
Printer<T>::Printer(int m)
{
	MaxQueueLength = m;
	Wait = new T[MaxQueueLength];
	Pri = new int[MaxQueueLength];
	QueueLength = 0;
}

template<class T>
void Printer<T>::Clear()
{
	QueueLength = 0;
}
template<class T>
bool Printer<T>::IsEmpty()
{
	return QueueLength == 0;
}
template<class T>
bool Printer<T>::IsFull()
{
	return QueueLength == MaxQueueLength;
}
template<class T>
int Printer<T>::GetCount()
{
	return QueueLength;
}
template<class T>
void Printer<T>::Add()
{
	if (!IsFull())
	{
		cin >> Wait[QueueLength];
		cout << "Enter priority: ";
		cin >> Pri[QueueLength];
		cin.ignore();
		QueueLength++;
	}
	else
	{
		cout << "Error! Queue is full !" << endl;
		system("pause>>NULL");
	}
}
template<class T>
T Printer<T>::Extract()
{
	if (!IsEmpty())
	{
		int max_pri = Pri[0];
		int pos_max_pri = 0;

		for (int i = 1; i < QueueLength; i++)
		{
			if (max_pri < Pri[i])
			{
				max_pri = Pri[i];
				pos_max_pri = i;
			}
		}
		T temp1 = Wait[pos_max_pri];
		int temp2 = Pri[pos_max_pri];
		for (int i = pos_max_pri; i < QueueLength - 1; i++) {
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		QueueLength--;	
		return temp1;
	}
	else
		return -1;
}