
/*16.	Write a C++ program to Swap variables using Function Overloading.*/
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    swap(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    cout << "Enter two decimal numbers: ";
    cin >> x >> y;

    swap(x, y);

    cout << "After swapping: " << x << " " << y;

    return 0;
}