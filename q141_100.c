#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s;

    // Read student's name (handles spaces safely)
    printf("Enter student name: ");
    if (fgets(s.name, sizeof(s.name), stdin) != NULL) {
        // Remove trailing newline character added by fgets
        s.name[strcspn(s.name, "\n")] = '\0';
    }

    // Read roll number and marks
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
