#include <stdio.h>

int main()
{
    int n, digit, i, count, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    n = (n < 0) ? -n : n;

    for(i = 0; i <= 9; i++)
    {
        count = 0;
        int temp = n;

        while(temp > 0)
        {
            digit = temp % 10;

            if(digit == i)
            {
                count++;
            }

            temp = temp / 10;
        }

        if(count > max)
        {
            max = count;
            result = i;
        }
    }

    printf("Digit occurring most times = %d\n", result);
    printf("Frequency = %d\n", max);

    return 0;
}
