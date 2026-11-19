#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that finds and returns the top student's structure
struct Student getTopStudent(const struct Student students[], int count) {
    int max_index = 0;

    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    return students[max_index];
}

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main(void) {
    struct Student classList[5] = {
        {"Aarav Sharma", 101, 88.50},
        {"Priya Verma", 102, 92.00},
        {"Rohan Das", 103, 76.25},
        {"Sneha Nair", 104, 84.75},
        {"Vikram Singh", 105, 91.50}
    };

    // Receive the returned structure
    struct Student topper = getTopStudent(classList, 5);

    printf("--- Top Student ---\n");
    printStudent(topper);

    return 0;
}
