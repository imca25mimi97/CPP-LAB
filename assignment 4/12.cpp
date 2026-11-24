/*12.	WAP to implement strcat() using a user defined function */
#include <iostream>
using namespace std;

void mystrcat(char a[], char b[]) {
    int i = 0, j = 0;
    while (a[i] != '\0')
        i++;

    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
}

int main() {
    char a[200], b[100];

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    mystrcat(a, b);
    cout << "Combined string = " << a;
    return 0;
}