#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius, volume, pi;
    pi = 3.14;
    cout << "Input the radius of a sphere: ";
    cin >> radius;

    volume = pi * (pow(radius, 3) * 4 / 3);

    cout << "The volume of a sphere is: " << volume << endl;
    return 0;
}