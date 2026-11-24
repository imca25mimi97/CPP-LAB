/*17.	Write a C++ Program to Compare Two Strings using Overloading.*/
#include <iostream>
#include <string>
using namespace std;

void compare(string a, string b)
{
    if (a == b)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}

void compare(char a[], char b[], int n)
{
    int i = 0;

    while (a[i] == b[i] && a[i] != '\0')
        i++;

    if (a[i] == b[i])
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";
}

int main()
{
    string a, b;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    compare(a, b);

    return 0;
}