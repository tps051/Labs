#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <conio.h>
#include <stdio.h>
#include "main2.cpp"
using namespace std;

int main()
{
    list<Complex> c;
    int n;
    cout << "Amount of numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        Complex comp;
        cout << "Input real and imaginary parts: ";
        cin >> comp;
        c.push_back(comp);
    }
    return 0;
}