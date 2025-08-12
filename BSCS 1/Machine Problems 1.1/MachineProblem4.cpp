#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side, cube;
    
    cout << "Input the side of a cube: ";
    cin >> side;

    cube = pow(side, 3);

    cout << "The volume of a cube is: " << cube << endl;
    return 0;
}