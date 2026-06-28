#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\nQ2. Which language is primarily used for C programming?\n");
    printf("1. HTML\n2. Python\n3. C\n4. Java\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\nQ5. Which symbol is used to end a C statement?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n===== Quiz Result =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
