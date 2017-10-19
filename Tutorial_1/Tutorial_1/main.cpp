// Tutorial_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Burrito.h"
#include <iostream>
#include <string>
using namespace std;

class First {
private:
	string name;
	
public:
	First(string z) { // Constructor: this gets called automatically when an object is created
		setName(z);
	}

	void setName(string x) { //"setter Class
		name = x;
	}

	string getName() {
		return name;
	}

};


int main()
{
	

	getchar(); //Prevent the Program from closing instantly
	return 0;
}

