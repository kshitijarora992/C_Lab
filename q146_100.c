#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joining_date; // Nested structure
};

void printEmployee(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%04d\n", 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);
}

int main(void) {
    // Initialize Employee with nested Date values
    struct Employee emp1 = {
        1042,
        "Meera Kapoor",
        78500.00,
        {15, 8, 2024} // Nested initializer for joining_date
    };

    printf("--- Employee Details ---\n");
    printEmployee(emp1);

    return 0;
}
