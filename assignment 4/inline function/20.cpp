/*WAP using a inline function compare() to check whether two arrays are equal or not and print the result in main() */
#include <iostream>
using namespace std;

inline int compare(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}

int main()
{
    int a[100], b[100], n;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter second array: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (compare(a, b, n) == 1)
        cout << "Arrays are equal";
    else
        cout << "Arrays are not equal";

    return 0;
}