/*WAP to define a structure TIME having members as hour, minute, and second. 
 Define a user-defined function ADDTIME () which will receive two structure variables as its arguments and will return a structure variable. 
 The ADDTIME () will add two different time values. */
#include <stdio.h>

struct TIME
{
    int hour;
    int minute;
    int second;
};

struct TIME ADDTIME(struct TIME t1, struct TIME t2)
{
    struct TIME t3;

    t3.second = t1.second + t2.second;
    t3.minute = t1.minute + t2.minute;
    t3.hour = t1.hour + t2.hour;

    if(t3.second >= 60)
    {
        t3.minute++;
        t3.second = t3.second - 60;
    }

    if(t3.minute >= 60)
    {
        t3.hour++;
        t3.minute = t3.minute - 60;
    }

    return t3;
}

int main()
{
    struct TIME t1, t2, t3;

    printf("Enter first time: ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time: ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    t3 = ADDTIME(t1, t2);

    printf("Total Time = %d:%d:%d",
           t3.hour, t3.minute, t3.second);

    return 0;
}
/*Enter first time: 2 45 30
Enter second time: 3 20 40

Total Time = 6:6:10
*/
