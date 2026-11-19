#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, j, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("%d %d", i, j);
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            break;
    }

    if(flag == 0)
        printf("-1 -1");

    return 0;
}
