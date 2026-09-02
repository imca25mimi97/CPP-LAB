/*WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary. Enter the details of 5 employees. 
 Display the details of those employees whose salary is greater than the average salary value of all employees. */
#include <stdio.h>

struct EMPLOYEE
{
    char name[50];
    int empid;
    char department[50];
    int age;
    float salary;
};

int main()
{
    struct EMPLOYEE e[5];
    int i;
    float sum = 0, average;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Employee ID: ");
        scanf("%d", &e[i].empid);

        printf("Department: ");
        scanf(" %[^\n]", e[i].department);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        sum = sum + e[i].salary;
    }

    average = sum / 5;

    printf("\nAverage Salary = %.2f\n", average);

    printf("\nEmployees having salary greater than average:\n");

    for(i = 0; i < 5; i++)
    {
        if(e[i].salary > average)
        {
            printf("\nName: %s", e[i].name);
            printf("\nID: %d", e[i].empid);
            printf("\nDepartment: %s", e[i].department);
            printf("\nAge: %d", e[i].age);
            printf("\nSalary: %.2f\n", e[i].salary);
        }
    }

    return 0;
}
/*Average Salary = 30000.00

Employees having salary greater than average:

Name: Raj
ID: 103
Department: Sales
Age: 30
Salary: 35000.00

Name: Sumit
ID: 105
Department: Finance
Age: 29
Salary: 32000.00*/
