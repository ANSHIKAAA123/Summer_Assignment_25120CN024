#include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++)
    {
        if(i < 2)
            continue;

        flag = 0;

        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    return 0;
}
