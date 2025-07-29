//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5, sum, difference, product, quotient;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourt number: ";
    cin >> num4;
    cout << "Enter the fifth number: ";
    cin >> num5;
    sum = num1 + num2;
    difference = sum - num3;
    product = difference * num4;
    quotient = product / num5;
    cout << "The sum is " << sum << endl;
    cout << "The difference is " << difference << endl;
    cout << "The product is " << product << endl;
    cout << "The quotient is " << quotient << endl;


    return 0;
}