// 23.08.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>

using namespace std;




int main()
{
	//zadacha 2
	/*srand(time(NULL));
	int arr[10];
	int *p;
	p = arr;
	int sum = 0;

	for (p = arr; p < arr + 10; p++)
	{
		*p = -25 + rand() % 30;
		cout << *p << " "<<endl;
	}

	for (p = arr; p < arr + 10; p++)
	{
		
		sum += *p;
	}
	cout <<"summa = "<< sum << endl;*/

	//zadacha 3
	/*int arr[10];
	int *p;
	p = arr;
	int proiz = 1;

	for (p = arr; p < arr + 10; p++)
	{
		*p = -44 + rand() % 76;
		cout << *p <<" "<< endl;
	}

	for (p = arr; p < arr + 10; p++)
	{
		proiz *= *p;
	}
	cout << "proizvedenie= " << proiz << endl;*/

	//zadacha4
	/*int arr[10];
	int *p;
	p = arr;
	int sum = 0;
	int srar = 0;

	for (p = arr; p < arr + 10; p++)
	{
		*p = -15 + rand() % 105;
		cout << *p << " " << endl;
	}

	for (p = arr; p < arr + 10; p++)
	{
		sum += *p;
		
	}
	srar = sum / 10;
	cout <<"srednee arifmeticheskoe = " << srar << endl;*/








	

	system("pause");
    return 0;
}

