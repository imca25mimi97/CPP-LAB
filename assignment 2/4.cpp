/*4.	Write a program in C++ to check whether a number is prime or not*/
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
/*Enter a number: 17
Prime number*/
