
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

    double x, x_min, x_max, y, z;
    cout << "Введіть значення параметру x: \n";
    cin >> x;
    cout << "Введіть значення параметру y: \n";
    cin >> y;
    if ((3 * y + 1) == 0 || (1 - 9 * pow(y, 2)) == 0 || (9 * y + 3) == 0)
    {
        cout << "y не задовольняє область визначення";
        return 0;
    }
        
    z = (sqrt((x + 2) / (3*y + 1))) + ((8 * pow(x, 2) + 3) / (1 - 9 * pow(y, 2))) * ((x + 0.5) / 9 * y + 3);
    cout <<"Значення виразу: " << z;


}

