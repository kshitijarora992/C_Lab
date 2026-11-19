#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, len = 0, max = 0, flag;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        len = 0;

        for(j = i; s[j] != '\0'; j++)
        {
            flag = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
                break;

            len++;
        }

        if(len > max)
            max = len;
    }

    printf("Length of longest substring = %d", max);

    return 0;
}
