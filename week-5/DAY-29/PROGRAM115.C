#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, result;

    printf("Enter first string: ");
    gets(str1);

    do
    {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch(choice)
        {
            case 1:
                printf("String: %s\n", str1);
                break;

            case 2:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 3:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;

            case 4:
                printf("Enter second string: ");
                gets(str2);

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated String: %s\n", temp);
                break;

            case 5:
                printf("Enter second string: ");
                gets(str2);

                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 6:
                strcpy(temp, str1);
                strrev(temp);

                printf("Reversed String: %s\n", temp);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}
