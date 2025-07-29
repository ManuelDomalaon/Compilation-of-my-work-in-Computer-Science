//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
using namespace std;

int main() {
    string name;
    int rate, worked;

    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the rate per hour: ";
    cin >> rate;
    cout << "Enter the hours worked: ";
    cin >> worked;

    const double salary = worked * rate;
    cout << name << ", Your salary is " << salary << endl;

    return 0;
}