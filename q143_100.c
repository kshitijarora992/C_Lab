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

        // Flush trailing newline before next fgets()
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Assume the first student has the highest marks initially
    int max_index = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    // Print the top-scoring student's details
    printf("\n--- Top Scoring Student ---\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);

    return 0;
}
