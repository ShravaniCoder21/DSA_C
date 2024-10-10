#include <stdio.h>
#include <string.h>

int main()
{
    // declaration/defination of structure
    struct Employee
    {
        char name[50];
        int age;
        float salary;
    };

    // declaration of memeber
    struct Employee Emp1;
    struct Employee Emp2;

    // assignment of memeber
    strcpy(Emp1.name, "Asmita");
    strcpy(Emp2.name, "shravan");
    Emp1.age = 21;
    Emp2.age = 23;
    Emp1.salary = 457789;
    Emp2.salary = 4756348753;

    printf("Name: %s\n", Emp1.name);
    printf("Age: %d\n", Emp1.age);
    printf("Salary: %.2f\n", Emp1.salary);
    printf("Name: %s\n", Emp2.name);
    printf("Age: %d\n", Emp2.age);
    printf("Salary: %.2f\n", Emp2.salary);
}