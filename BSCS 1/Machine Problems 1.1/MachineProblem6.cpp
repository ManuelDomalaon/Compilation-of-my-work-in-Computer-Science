#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float firstSide, secondSide, thirdSide, side, area;

    cout << "Input the length of 1st side of the triangle: ";
    cin >> firstSide;
    cout << "Input the length of 2nd side of the triangle: ";
    cin >> secondSide;
    cout << "Input the length of 3rd side of the triangle: ";
    cin >> thirdSide;

    side = (firstSide + secondSide + thirdSide) / 2;
    area = sqrt(side * (side - firstSide) * (side - secondSide) * (side - thirdSide));

    cout << "The area of the triangle is: " << area << endl;
    return 0;
}