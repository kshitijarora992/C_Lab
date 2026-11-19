#include <stdio.h>

int main()
{
    int n, x, total = 0, left = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for(x = 1; x <= n; x++)
    {
        left += x;

        if(left == total - left + x)
        {
            printf("Pivot integer = %d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
