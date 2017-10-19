// SimpleLoopProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int x = 1;
	int number;
	int total = 0;

	while (x <= 5) {
		cin >> number;
		total += number;
		x++;
	}
	cout << "your total is: " << total;

    return 0;
}

