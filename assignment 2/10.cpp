/*WAP in C++ to reverse an array without using another array*/
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
/*Enter number of elements: 5
Enter elements: 10 20 30 40 50

Reversed array: 50 40 30 20 10*/
