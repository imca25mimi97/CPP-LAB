/*WAP to find average of the element present in  the array using inline function. */
#include <iostream>
using namespace std;

inline float average(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return (float)sum / n;
}

int main()
{
    int a[100], n;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Average = " << average(a, n);

    return 0;
}