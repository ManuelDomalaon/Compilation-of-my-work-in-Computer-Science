//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;
    const double pi = 3.1416;

    cout << "Enter the value of the radius: ";
    cin >> radius;

    area = pi * pow(radius, 2);
    cout << "The area is " << area << endl;

    return 0;
}