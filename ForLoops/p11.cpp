#include <iostream>
using namespace std;

int main()
{
    int number;
    long factorial = 1;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }
}