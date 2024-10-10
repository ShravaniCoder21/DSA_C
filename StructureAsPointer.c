#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

// Function now accepts a pointer to a structure
void PrintEmployee(struct Employee *empl) {
    printf("Name: %s\n", empl->name);  // Using -> to access members via pointer
    printf("Age: %d\n", empl->age);
    printf("Salary: %.2f\n", empl->salary);
}

int main() {
    // Declaration of Employee structures
    struct Employee Emp1;
    struct Employee Emp2;

    // Pointer to Employee structure
    struct Employee *Employe;

    // Define address (point to Emp1)
    Employe = &Emp1;

    // Assignment of members
    strcpy(Emp1.name, "Asmita");
    strcpy(Emp2.name, "Shravan");
    Emp1.age = 21;
    Emp2.age = 23;
    Emp1.salary = 457789;
    Emp2.salary = 4756348.753;

    // Print employee details using pointer
    PrintEmployee(Employe);  // Now pass pointer

    // You can also pass Emp2 using the address operator (&)
    PrintEmployee(&Emp2);    // Passing pointer to Emp2

    return 0;
}
