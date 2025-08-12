#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    float kph, mph;
    
    cout << "Input the distance in kilometer: ";
    cin >> kph;

    mph = kph * 0.6213712;
    cout << "The " << kph << " Km./hr. means " << mph << " Miles/hr." << endl;
    return 0;
}