// Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary.
#include <stdio.h>
#include <stdio.h>
struct Employee
{
    char NAME[100];
    float BASICpay;
    float DA;
    float grossSalary;
};
int main()
{
    struct Employee employee[100];
    printf("enter employee details:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("enter name of employee %d: ", i + 1);
        scanf("%s", employee[i].NAME);
        printf("enter basic pay of %s: ",employee[i].NAME);
        scanf("%f", &employee[i].BASICpay);
        employee[i].DA = employee[i].BASICpay * 0.52;
        employee[i].grossSalary = employee[i].BASICpay + employee[i].DA;
    }
    printf("employee gross salary details");
    for (int i = 0; i < 100; i++)
    {
        printf("employee %d:%s gross Salary: %.2f\n", i + 1, employee[i].NAME, employee[i].grossSalary);
    }
    return 0;
}
