
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

    double x, y, a, w, v, t;
    x = 2.9;
    cout << "Варіант 23 \nВведіть значення другого параметру: \n";
    cin >> a;
    v = pow(cos(a), 2);
    w = sqrt(a + fabs(x));
    y = pow(v, 3) + pow(cos(w), 2);
    cout <<"y: " << y << "\n";

}


