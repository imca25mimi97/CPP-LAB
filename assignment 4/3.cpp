/*3.	WAP to merge the elements of two arrays using function */
#include <iostream>
using namespace std;

void merge(int a[], int b[], int c[], int n, int m) {
    int i;
    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (int j = 0; j < m; j++) {
        c[i] = b[j];
        i++;
    }
}

int main() {
    int a[50], b[50], c[100], n, m;

    cout << "Enter first array size: ";
    cin >> n;
    cout << "Enter first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter second array size: ";
    cin >> m;
    cout << "Enter second array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];

    merge(a, b, c, n, m);

    cout << "Merged array: ";
    for (int i = 0; i < n+m; i++)
        cout << c[i] << " ";

    return 0;
}