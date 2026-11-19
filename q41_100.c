#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, divisor = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    temp = n;
    while (temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    swapped = n - first * divisor - last;
    swapped = swapped + last * divisor + first;

    printf("Number after swapping first and last digits = %d", swapped);

    return 0;
}
