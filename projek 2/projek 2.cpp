// projek 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	int nBilA, nBilB;
	string status;

	nBilA = rand() % 11;
	nBilB = rand() % 11;

	if (nBilA == nBilB) {
		status = "Bilangan sama";
	}
	else if (nBilA > nBilB) {
		status = "Bilangan A lebih bisar dari Bilangan B";
	}
	else {
		status = "Bilangan A lebih kecil dari Bilangan B";
	}