#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, found = 0;

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
        printf("Strings are not rotations");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(str1[(i + j) % len1] != str2[j])
                break;
        }

        if(j == len2)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Strings are rotations");
    else
        printf("Strings are not rotations");

    return 0;
}
