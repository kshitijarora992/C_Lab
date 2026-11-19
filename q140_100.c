#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

// Helper function to convert the enum integer to a readable string
const char* getGenderString(enum Gender g) {
    switch (g) {
        case MALE:   return "Male";
        case FEMALE: return "Female";
        case OTHER:  return "Other";
        default:     return "Unknown";
    }
}

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s (stored integer: %d)\n", getGenderString(p.gender), p.gender);
}

int main(void) {
    struct Person person1 = {"Alice", 28, FEMALE};
    struct Person person2 = {"Bob", 34, MALE};

    printPerson(person1);
    printf("---\n");
    printPerson(person2);

    return 0;
}
