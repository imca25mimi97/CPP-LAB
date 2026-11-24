/*Write a C++ program to find the reverse  the elements of an array using inline function.*/
#include <iostream>
using namespace std;

inline void reverse(int a[], int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main()
{
    int a[100], n;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(a, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}