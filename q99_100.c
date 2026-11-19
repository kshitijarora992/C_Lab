#include <stdio.h>

int main()
{
    char date[20];
    int i;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    for(i = 0; date[i] != '\0'; i++)
    {
        if(date[i] == '/')
            printf("-");
        else if(date[i] == '0' && date[i+1] == '4' && date[i+2] == '/')
        {
            printf("Apr");
            i = i + 1;
        }
        else
            printf("%c", date[i]);
    }

    return 0;
}
