/*7.	WAP in C++ to calculate hours, minutes, and seconds by inputting seconds as input. For example: 
INPUT	: Enter the time value in seconds: 3672 
OUTPUT: 1 Hour 1 minute 12 seconds 
*/
#include <iostream>
using namespace std;

int main()
{
    int seconds, hour, minute, second;

    cout << "Enter the time value in seconds: ";
    cin >> seconds;

    hour = seconds / 3600;
    seconds = seconds % 3600;

    minute = seconds / 60;
    second = seconds % 60;

    cout << hour << " Hour "
         << minute << " minute "
         << second << " seconds";

    return 0;
}
/*Enter the time value in seconds: 3672

1 Hour 1 minute 12 seconds*/
