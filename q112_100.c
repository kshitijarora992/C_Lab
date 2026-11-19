#include <stdio.h>

int main()
{
    int arr[100], n, i, currSum, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    currSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

        if(currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum subarray sum = %d", maxSum);

    return 0;
}
