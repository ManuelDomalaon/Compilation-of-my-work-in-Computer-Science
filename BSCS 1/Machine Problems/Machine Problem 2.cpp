//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double prelim, midterm, final;

    cout << "Enter the Prelim Grade: ";
    cin >> prelim;
    cout << "Enter the Midterm Grade: ";
    cin >> midterm;
    cout << "Enter the Final Grade: ";
    cin >> final;

    double average = (prelim * 0.30) + (midterm * 0.30) + (final * 0.40);
    cout << fixed << setprecision(2);
    cout << "The General Average of the three numbers is " << average << endl;

    return 0;
}