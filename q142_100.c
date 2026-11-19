#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student students[NUM_STUDENTS];

    // Read details for 5 students
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        if (fgets(students[i].name, sizeof(students[i].name), stdin) != NULL) {
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
        }

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Consume leftover newline in input buffer before next fgets()
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Print all stored student records
    printf("\n================ Student Records ================\n");
    printf("%-25s %-12s %-10s\n", "Name", "Roll No", "Marks");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-25s %-12d %-10.2f\n", 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }

    return 0;
}
