#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++);

    j = i - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("String is a palindrome");
    else
        printf("String is not a palindrome");

    return 0;
}
