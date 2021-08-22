#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	int menu;
	cin >> menu;
	switch (menu)
	{
	case 1:
	{
		srand(time(0));
		int size, size2;
		cin >> size >> size2;
		int* massiv = new int[size];
		int* massiv2 = new int[size2];
		for (int i = 0; i < size; i++)
		{
			massiv[i] = 1 + rand() % 50;
			cout << massiv[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size2; j++)
			{
				massiv2[j] = massiv[i];
				cout << massiv2[j] << " ";
			}
	}break;
	case 2:
	{
		srand(time(0));
		int size, size2;
		cin >> size;
		int* massiv = new int[size];
		for (int i = 0; i < size; i++)
		{
			massiv[i] = 1 + rand() % 50;
			cout << massiv[i] << " ";
		}
		cout << endl << endl;
		int* end = &massiv[size - 1];
		for (int i = 0; i < size; i++)
		{
			cout << *end << " ";
			end--;
		}
	}break;
	case 3:
	{
		srand(time(0));
		int size, size2;
		cin >> size >> size2;
		int* massiv = new int[size];
		int* massiv2 = new int[size2];
		for (int i = 0; i < size; i++)
		{
			massiv[i] = 1 + rand() % 50;
			cout << massiv[i] << " ";
		}
		cout << endl << endl;
		int* end = &massiv[size-1];
		for (int j = 0; j < size2; j++)
		{
			massiv2[j] = *end;
			*end--;
			cout << massiv2[j] << " ";
		}
	}break;
	}
}