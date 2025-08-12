#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Input 1st number: ";
    cin >> num1;
    cout << "Input 2nd number: ";
    cin >> num2;

    swap(num1, num2);

    cout << "After swapping the 1st number is: " << num1 << '\n';
    cout << "After swapping the 2nd number is:" << num2 << endl;
    return 0;
}