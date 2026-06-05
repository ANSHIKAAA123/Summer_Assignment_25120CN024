#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Nth Fibonacci term = %d", a);
    else if (n == 1)
        printf("Nth Fibonacci term = %d", b);
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}
