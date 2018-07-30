#include<iostream>
#include<conio.h>
using namespace std;

void StringTokens(char[]);

void main()
{
	const int SIZE = 80;
	char String[SIZE] = { 0 };

	cout << "Enter Values In A String:- ";
	cin.getline(String, SIZE, '\n');

	cout << "String Tokens Are:- " << endl;
	StringTokens(String);

	_getch();
}

void StringTokens(char String[])
{
	for (int i = 0; String[i] != '\0'; i++)
	{
		if (String[i] != ' ')
			cout << String[i];
		else
			cout << endl;
	}
}