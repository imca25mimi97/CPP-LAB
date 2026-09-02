/* WAP to define a structure BOOK having members as title, author name, no. of pages, and price. Enter the details of a book and display them. */
#include <stdio.h>
#include <math.h>

struct POINT{
    float x;
    float y;
};

int main(){
    struct POINT p1, p2;
    float distance;
    printf("Enter x and y of first point: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter x and y of second point: ");
    scanf("%f %f", &p2.x, &p2.y);
    distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    printf("Distance = %.2f", distance);
    
    return 0;
}
/*Enter x and y of first point: 2 3
Enter x and y of second point: 5 7

Distance = 5.00*/
