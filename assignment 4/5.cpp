/*5.	WAP to take input ,add  and display the elements of the matrix using function */
#include <iostream>
using namespace std;

void matrix(int a[10][10], int r, int c) {
    int sum = 0;
    cout << "Enter matrix elements: ";

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }

    cout << "Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Sum = " << sum;
}

int main() {
    int a[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    matrix(a, r, c);
    return 0;
}