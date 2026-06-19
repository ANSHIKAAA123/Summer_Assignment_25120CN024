#include <stdio.h>

int main()
{
    int arr[100], n, i, j, target;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Pair Found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
    {
        printf("No pair found.");
    }

    return 0;
}
