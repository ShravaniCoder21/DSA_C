#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int age;
    float salary;
};

// defined function
//void PrintEmployee(struct Employee empl);
// function call
void PrintEmployee(struct Employee empl)
{
    printf("Name: %s\n", empl.name);
    printf("Age: %d\n", empl.age);
    printf("Salary: %.2f\n", empl.salary);
}

int main()
{
    // declaration/defination of structure

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
    PrintEmployee(Emp1);
    PrintEmployee(Emp2);
}

