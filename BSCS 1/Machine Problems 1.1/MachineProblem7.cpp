#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double radius, area, circumference;
    const float PI = M_PI;

    cout << "Input the radius of (1/2 of diameter) of a circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;
    area = PI * (radius * radius);
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
}