#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, arraySum = 0, missing;

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    totalSum = n * (n + 1) / 2;

    missing = totalSum - arraySum;

    printf("Missing Number = %d", missing);

    return 0;
}
