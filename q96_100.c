#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, start, end;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while(start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Modified sentence: %s", str);

    return 0;
}
