
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, z1, z2;
    cout << "Варіант 3 \nВведіть a: \n";
    cin >> a;
    z1 = (sin(2 * a)+sin(5*a)-sin(3*a))/(cos(a)+1-2*pow(sin(2 * a), 2));
    cout <<"z1: " << z1<< "\n";
    z2 = 2 * sin(a);
    cout <<"z2: " << z2 << "\n";



}


