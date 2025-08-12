#include <iostream>
using namespace std;

int main()
{
    int num1, num2, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> num1;
    cout << "Enter divisor: ";
    cin >> num2;

    quotient = num1 / num2;
    remainder = num1 % num2;

    cout << "Quotient    :  " << quotient << '\n';
    cout << "Remainder   :  " << remainder << endl;
    return 0;
}