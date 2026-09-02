/*Write a program in C++ to find the sum of the digits of a given number*/
#include <iostream>
using namespace std;

int main()
{
    int n, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
/*Enter a number: 1234
Sum of digits = 10*/
