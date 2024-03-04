// peretemuan kedua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   
    srand(time(0));
    
    int nBilA, nBilB;
    nBilA = rand() % 11;
    nBilB = rand() % 11;

    string status;

    if (nBilA == nBilB) {
        status = "Bilangan sama";
    }
    else if (nBilA > nBilB){
        status = "Bilangan A lebih besar dibanding bilangan B";
    }
    else
    {
        status = "Bilangan A lebih kecil dibanding bilangan B";
    }

    cout << "Bilangan A =" << nBilA << endl;
    cout << "Bilangan B =" << nBilB << endl;
    cout << "status Bilangan =" << status << endl;
