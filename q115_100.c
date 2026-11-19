#include <stdio.h>

int main()
{
    char s[100], t[100];
    int i, j, len1 = 0, len2 = 0, flag;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    for(i = 0; s[i] != '\0'; i++)
        len1++;

    for(i = 0; t[i] != '\0'; i++)
        len2++;

    if(len1 != len2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; s[i] != '\0'; i++)
    {
        flag = 0;

        for(j = 0; t[j] != '\0'; j++)
        {
            if(s[i] == t[j])
            {
                t[j] = '*';
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
