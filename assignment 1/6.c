/*WAP to define a structure COMPLEX having members as real, and imag. 
 Define a user-defined function ADDCOMPLEX () which will receive two structure variables as its arguments and will return a structure variable. 
The ADDCOMPLEX () will add two complex numbers. */
#include <stdio.h>

struct COMPLEX
{
    float real;
    float imag;
};

struct COMPLEX ADDCOMPLEX(struct COMPLEX c1, struct COMPLEX c2)
{
    struct COMPLEX c3;

    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    return c3;
}

int main()
{
    struct COMPLEX c1, c2, c3;

    printf("Enter first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    c3 = ADDCOMPLEX(c1, c2);

    printf("Sum = %.2f + %.2fi", c3.real, c3.imag);

    return 0;
}
/*Enter first complex number: 5 3
Enter second complex number: 2 4
*/
Sum = 7.00 + 7.00i

