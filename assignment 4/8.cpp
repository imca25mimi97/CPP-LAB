/*8.	WAP to check whether the matrix is symmetric or not using function and print the result in main(). */
#include <iostream>
using namespace std;

int symmetric(int a[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                return 0;
    return 1;
}

int main() {
    int a[10][10], n;
    cout << "Enter matrix size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    if (symmetric(a, n))
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}