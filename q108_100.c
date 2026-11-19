#include <stdio.h>

int main()
{
    int nums[100], answer[100], n, i, product = 1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(int j = 0; j < n; j++)
        {
            if(i != j)
                product = product * nums[j];
        }

        answer[i] = product;
    }

    printf("Answer array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}
