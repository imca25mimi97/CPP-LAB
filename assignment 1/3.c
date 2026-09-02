/*WAP to define a structure EMPLOYEE having elements as name, empid, department, age, and salary. Enter the details of 5 employees and display the details of each employee. */
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

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %s", e[i].name);

        printf("Employee ID: ");
        scanf("%d", &e[i].empid);

        printf("Department: ");
        scanf(" %s", e[i].department);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Details ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].empid);
        printf("Department: %s\n", e[i].department);
        printf("Age: %d\n", e[i].age);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}
/*Enter details of employee 1
Name: Rahul
Employee ID: 101
Department: IT
Age: 25
Salary: 25000

Enter details of employee 2
Name: Amit
Employee ID: 102
Department: HR
Age: 28
Salary: 30000

Enter details of employee 3
Name: Raj
Employee ID: 103
Department: Sales
Age: 30
Salary: 35000

Enter details of employee 4
Name: Ankit
Employee ID: 104
Department: IT
Age: 26
Salary: 28000

Enter details of employee 5
Name: Sumit
Employee ID: 105
Department: Finance
Age: 29
Salary: 32000

--- Employee Details ---

Employee 1
Name: Rahul
ID: 101
Department: IT
Age: 25
Salary: 25000.00

Employee 2
Name: Amit
ID: 102
Department: HR
Age: 28
Salary: 30000.00

Employee 3
Name: Raj
ID: 103
Department: Sales
Age: 30
Salary: 35000.00

Employee 4
Name: Ankit
ID: 104
Department: IT
Age: 26
Salary: 28000.00

Employee 5
Name: Sumit
ID: 105
Department: Finance
Age: 29
Salary: 32000.00*/
