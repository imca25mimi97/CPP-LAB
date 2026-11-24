/*7.	WAP to multiply two matrix using function */
#include <iostream>
using namespace std;

void multiply(int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

    cout << "Enter first matrix rows and columns: ";
    cin >> r1 >> c1;
    cout << "Enter second matrix rows and columns: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Multiplication not possible";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    multiply(a, b, c, r1, c1, c2);

    cout << "Result:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}