/*WAP in C++ to display all Armstrong numbers within a given range.*/
#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting value: ";
    cin >> start;

    cout << "Enter ending value: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(int n = start; n <= end; n++)
    {
        int temp = n;
        int sum = 0;

        while(temp > 0)
        {
            int digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if(sum == n)
        {
            cout << n << " ";
        }
    }

    return 0;
}
/*Enter starting value: 1
Enter ending value: 500

Armstrong numbers are: 1 153 370 371 407
*/
