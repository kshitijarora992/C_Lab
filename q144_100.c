#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function accepting a structure by value
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main(void) {
    struct Student student1 = {"Ananya Rao", 107, 94.50};

    // Pass the structure variable directly to the function
    printStudent(student1);

    return 0;
}
