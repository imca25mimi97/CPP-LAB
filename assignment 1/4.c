/*. WAP to define a structure STUDENT having members as name, roll_ no, branch, and CGPA. Enter the details of 5 students. Display the details of the student having the highest CGPA. */
#include <stdio.h>

struct STUDENT
{
    char name[50];
    int roll_no;
    char branch[50];
    float cgpa;
};

int main()
{
    struct STUDENT s[5];
    int i, highest = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Branch: ");
        scanf(" %s", s[i].branch);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].cgpa > s[highest].cgpa)
        {
            highest = i;
        }
    }

    printf("\n--- Student with Highest CGPA ---\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll No: %d\n", s[highest].roll_no);
    printf("Branch: %s\n", s[highest].branch);
    printf("CGPA: %.2f\n", s[highest].cgpa);

    return 0;
}
/*Enter details of student 1
Name: Rahul
Roll No: 101
Branch: CSE
CGPA: 7.5

Enter details of student 2
Name: Amit
Roll No: 102
Branch: IT
CGPA: 8.2

Enter details of student 3
Name: Raj
Roll No: 103
Branch: CSE
CGPA: 7.8

Enter details of student 4
Name: Ankit
Roll No: 104
Branch: ECE
CGPA: 8.7

Enter details of student 5
Name: Sumit
Roll No: 105
Branch: CSE
CGPA: 8.1

--- Student with Highest CGPA ---
Name: Ankit
Roll No: 104
Branch: ECE
CGPA: 8.70*/
