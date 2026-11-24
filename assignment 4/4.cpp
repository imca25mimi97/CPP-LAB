/*4.	Write a program to display nth term of Fibonacci series using function.*/
#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n == 1) return a;
    if (n == 2) return b;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter term number: ";
    cin >> n;

    cout << "Fibonacci term = " << fibonacci(n);
    return 0;
}