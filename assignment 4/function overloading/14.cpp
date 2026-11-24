/*15.	Write a C++ program to find area of a Tringle, Rectangle, Circle and Square using Function Overloading.*/
#include <iostream>
using namespace std;

float area(float l, float b)
{
    return l * b;
}

float area(float s)
{
    return s * s;
}

float area(double r)
{
    return 3.14 * r * r;
}

float area(float a, float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float l, b, s, base, h;
    double r;

    cout << "Enter rectangle length and breadth: ";
    cin >> l >> b;
    cout << "Rectangle area = " << area(l, b) << endl;

    cout << "Enter square side: ";
    cin >> s;
    cout << "Square area = " << area(s) << endl;

    cout << "Enter circle radius: ";
    cin >> r;
    cout << "Circle area = " << area(r) << endl;

    cout << "Enter triangle base and height: ";
    cin >> base >> h;
    cout << "Triangle area = " << area(0.0f, base, h);

    return 0;
}