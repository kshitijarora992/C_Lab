#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count = 0, len1 = 0, len2 = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
        len1++;

    for(i = 0; str2[i] != '\0'; i++)
        len2++;

    if(len1 != len2)
    {
        printf("Strings are not anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                str2[j] = '*';
                count++;
                break;
            }
        }
    }

    if(count == len1)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}
