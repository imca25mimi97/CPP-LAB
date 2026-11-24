/*13.	WAP to implement strcmp() using a user defined function*/
#include <iostream>
using namespace std;

int mystrcmp(char a[], char b[]) {
    int i = 0;
    while (a[i] == b[i]) {
        if (a[i] == '\0')
            return 0;
        i++;
    }
    if (a[i] > b[i])
        return 1;
    else
        return -1;
}

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    int result = mystrcmp(a, b);

    if (result == 0)
        cout << "Strings are equal";
    else if (result > 0)
        cout << "First string is greater";
    else
        cout << "Second string is greater";

    return 0;
}