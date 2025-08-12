#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int angle1, angle2, angle3;

    cout << "Input the 1st angle of the triangle: ";
    cin >> angle1;
    cout << "Input the 2nd angle of the triangle: ";
    cin >> angle2;

    angle3 = 180 - (angle1 + angle2);
    cout << "The 3rd of the triangle is: " << angle3 << endl;
    return 0;
}