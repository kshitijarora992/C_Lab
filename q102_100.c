#include <stdio.h>

int main()
{
    int arr[100], n, x, i, index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("Ceil index = %d", index);

    return 0;
}
