#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    scanf("%[^\n]", name);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            last = i + 1;
    }

    for(i = 0; i < last - 1; i++)
    {
        if(i == 0 || name[i - 1] == ' ')
            printf("%c. ", name[i]);
    }

    printf("%s", &name[last]);

    return 0;
}
