#include <stdio.h>

int main()
{
    int arr[100], n, i, j, total = 0, left = 0, right;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - arr[i];

        if(left == right)
        {
            printf("Pivot index = %d", i);
            return 0;
        }

        left += arr[i];
    }

    printf("Pivot index = -1");

    return 0;
}
