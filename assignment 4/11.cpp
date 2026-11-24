/*11.	Write a user defined function to convert lower case character of the string to upper case.*/
#include <iostream>
using namespace std;

void uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
}

int main() {
    char str[100];
    cout << "Enter string: ";
    cin >> str;

    uppercase(str);
    cout << "Uppercase = " << str;
    return 0;
}