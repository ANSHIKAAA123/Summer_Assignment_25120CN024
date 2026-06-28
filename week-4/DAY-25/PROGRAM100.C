#include <stdio.h>
#include <string.h>

int main() {
    char words[20][50], temp[50];
    int n, i, j;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
