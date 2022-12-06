
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

	cout << "Варіант 23\n";
	int i = 23;
	double ab = sqrt(pow(i - 0, 2) + pow(i - 1 - 0, 2));
	cout <<"Сторона AB: " << ab <<"\n";
	double bc = sqrt(pow(i + i, 2) + pow(i + 1 - i - 1, 2));
	cout << "Сторона BC: " << bc << "\n";
	double ca = sqrt(pow(-i - 0, 2) + pow(i + 1 - 0, 2));
	cout << "Сторона CA: " << ca << "\n";
	double m = sqrt(2*pow(ab, 2) + 2*pow( ca, 2) - pow(bc, 2)) / 2;
	cout << "Медіанна Ma: " << m << "\n";
	double x = sqrt(ab * bc * (ab + bc + ca) * (ab + bc - ca)) / (ab + bc);
	cout << "Бісектриса Wc: " << x << "\n";



}


