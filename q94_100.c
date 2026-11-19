#include <stdio.h>

int main()
{
    char str[200];
    int i, len = 0, max = 0, start = 0, maxstart = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(len > max)
            {
                max = len;
                maxstart = start;
            }

            len = 0;
            start = i + 1;
        }
        else
        {
            len++;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word: ");

    for(i = maxstart; i < maxstart + max; i++)
        printf("%c", str[i]);

    printf("\nLength: %d", max);

    return 0;
}
