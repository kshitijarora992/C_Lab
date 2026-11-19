#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
