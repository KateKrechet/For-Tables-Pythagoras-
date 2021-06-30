#include<iostream>
using namespace std;
#define MULTIPLICATION_TABLE
#define PYTHAGORAS_TABLE
#define tab "\t"
#define newline "\n\n"


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef MULTIPLICATION_TABLE
	cout << "Таблица умножения" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << "*";
			if (j < 10) cout << " ";
			cout << j << "=";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
		cout << "-----------------\n";
	}
#endif // MULTIPLICATION_TABLE


#ifdef PYTHAGORAS_TABLE
	cout << "Таблица Пифагора" << endl;

	cout << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)

		{
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << tab;
		}
		cout << newline;
	}
#endif // PYTHAGORAS_TABLE





}