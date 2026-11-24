/*6.	WAP to add two matrix using function */
#include <iostream>
using namespace std;

void add(int a[10][10], int b[10][10], int c[10][10], int r, int col) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
}

int main() {
    int a[10][10], b[10][10], c[10][10], r, col;

    cout << "Enter rows and columns: ";
    cin >> r >> col;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < col; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < col; j++)
            cin >> b[i][j];

    add(a, b, c, r, col);

    cout << "Addition:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < col; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}