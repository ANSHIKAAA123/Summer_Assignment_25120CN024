#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, remainder, digits = 0;
    int sum = 0, temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is Not an Armstrong Number.\n", num);

    return 0;
}
