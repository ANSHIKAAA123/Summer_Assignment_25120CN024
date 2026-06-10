#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        ch = 'A' + i - 2;
        for(j = 1; j <= i - 1; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}
