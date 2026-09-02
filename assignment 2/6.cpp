/*Write a program to test the operation of scope resolution operator*/
#include <iostream>
using namespace std;

int x = 100;

int main()
{
    int x = 50;

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x;

    return 0;
}
/*
Local x = 50
Global x = 100
*/
