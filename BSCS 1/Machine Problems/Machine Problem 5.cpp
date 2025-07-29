//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    double c;

    cout << "Enter the temperature in celsius is: ";
    cin >> c;

    const double f = (9.0/5.0) * c + 32;

    cout << "The equivalent temperature in Fahrenheit is " << f << endl;

    return 0;
}