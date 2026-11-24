/*14.	Write a C++ Program with three different functions with same name to find the sum of digits using function overloading.*/
#include <iostream>
using namespace std;

int sum(int n)
{
    int s = 0;

    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }

    return s;
}

int sum(int n, int m)
{
    return sum(n) + sum(m);
}

int sum(int n, int m, int k)
{
    return sum(n) + sum(m) + sum(k);
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Sum of digits of first number = " << sum(a) << endl;
    cout << "Sum of digits of two numbers = " << sum(a, b) << endl;
    cout << "Sum of digits of three numbers = " << sum(a, b, c);

    return 0;
}