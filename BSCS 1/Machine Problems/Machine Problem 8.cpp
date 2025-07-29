//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    double dollar;
    const double pesoRate = 51.50;

    cout << "Enter the dollar: ";
    cin >> dollar;

    cout << "The equivalent in peso is " << dollar * pesoRate << endl;

    return 0;
}
