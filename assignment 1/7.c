/*WAP to define a structure DISTANCE having members as kms, and metres.
 Define a user-defined function ADDDISTANCE () which will receive two structure variables as its arguments and will return a structure variable. 
 The ADDDISTANCE () will add two distance values. */
 
#include <stdio.h>

struct DISTANCE
{
    int kms;
    int metres;
};

struct DISTANCE ADDDISTANCE(struct DISTANCE d1, struct DISTANCE d2)
{
    struct DISTANCE d3;

    d3.kms = d1.kms + d2.kms;
    d3.metres = d1.metres + d2.metres;

    if(d3.metres >= 1000)
    {
        d3.kms++;
        d3.metres = d3.metres - 1000;
    }

    return d3;
}

int main()
{
    struct DISTANCE d1, d2, d3;

    printf("Enter first distance: ");
    scanf("%d %d", &d1.kms, &d1.metres);

    printf("Enter second distance: ");
    scanf("%d %d", &d2.kms, &d2.metres);

    d3 = ADDDISTANCE(d1, d2);

    printf("Total Distance = %d km %d metres",
           d3.kms, d3.metres);

    return 0;
}
/*Enter first distance: 5 700
Enter second distance: 3 500

Total Distance = 9 km 200 metres*/
