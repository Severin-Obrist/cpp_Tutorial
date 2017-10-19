// do-while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int x = 1;

	do {
		cout << x << endl;
		x++;
	} while (x < 10);			// always runs the code above at least once

    return 0;
}

