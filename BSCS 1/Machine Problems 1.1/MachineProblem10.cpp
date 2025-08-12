//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main()
{
    double f, k;

    cout << "Enter the temperature in kelvin is: ";
    cin >> k;

    f = (k - 273.15) * 9 / 5 + 32;

    cout << "The temperature in Kelvin : " << k << endl;
    cout << "The temperature in Fahrenheit: " << f << endl;

    return 0;
}
