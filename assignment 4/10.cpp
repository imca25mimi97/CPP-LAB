/*10.	WAP to implement strlen() using a user-defined function.*/
#include <iostream>
using namespace std;

int mystrlen(char str[]) {
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

int main() {
    char str[100];
    cout << "Enter string: ";
    cin >> str;

    cout << "Length = " << mystrlen(str);
    return 0;
}