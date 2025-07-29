//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    double f;

    cout << "Enter the temperature in Fahrenheit is: ";
    cin >> f;

    const double c = 5.0/9.0 * (f - 32);

    cout << "The equivalent temperature in Celsius is " << c << endl;

    return 0;
}



