/*9.	WAP to display a string using function.*/
#include <iostream>
using namespace std;

void display(char str[]) {
    cout << "String = " << str;
}

int main() {
    char str[100];
    cout << "Enter string: ";
    cin >> str;

    display(str);
    return 0;
}