#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    return (original == reverse);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is Not a Palindrome Number.\n", num);

    return 0;
}
