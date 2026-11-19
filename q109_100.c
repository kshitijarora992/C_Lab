#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, sum, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    max = 0;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(i == 0 || sum > max)
            max = sum;
    }

    printf("Maximum subarray sum = %d", max);

    return 0;
}
