/*1.	Write a program to check whether the entered number is palindrome or not. The function returns 1 if the number is palindrome otherwise it returns 0.*/
#include <iostream>
using namespace std;

int palindrome(int n)
{
    int rev = 0, rem, temp = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (palindrome(n) == 1)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";

    return 0;
}