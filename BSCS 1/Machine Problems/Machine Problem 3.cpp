//
// Created by John Manuel Domalaon on 7/29/25.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price, years, salvage, depreciation;

    cout << "Enter the purchase price of an item: ";
    cin >> price;
    cout << "Enter the number of years in service: ";
    cin >> years;
    cout << "Enter the expected salvage valaue: ";
    cin >> salvage;

    depreciation = (price - salvage) / years;
    cout << fixed << setprecision(2);
    cout << "The yearly depreciation for the Item is " <<  depreciation;

    return 0;
}