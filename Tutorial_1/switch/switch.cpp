// switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int age;

	cin >> age;

	switch (age)
	{
	case 16:
		cout << "16";
		break;
	case 18:
		cout << "adult";
		break;
	default:
		break;
	}

	getchar();
    return 0;
}

