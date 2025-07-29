//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    double inch;
    const double cm = 2.54;

    cout << "Enter the inch(es): ";
    cin >> inch;

    cout << "The equivalent in cm(s) is " << inch * cm << endl;

    return 0;
}
