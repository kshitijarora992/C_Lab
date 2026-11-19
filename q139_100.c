#include <stdio.h>

enum Status {
    PENDING,        // Implicitly assigned 0
    IN_PROGRESS,    // Implicitly assigned 1
    COMPLETED = 10, // Explicitly assigned 10
    FAILED          // Implicitly assigned 11 (previous value + 1)
};

int main(void) {
    enum Status task1 = PENDING;
    enum Status task2 = IN_PROGRESS;
    enum Status task3 = COMPLETED;
    enum Status task4 = FAILED;

    // Print enum constants directly as integers using %d
    printf("PENDING: %d\n", task1);
    printf("IN_PROGRESS: %d\n", task2);
    printf("COMPLETED: %d\n", task3);
    printf("FAILED: %d\n", task4);

    // Enums can also be used directly in integer arithmetic
    printf("Sum of COMPLETED and FAILED: %d\n", task3 + task4);

    return 0;
}
