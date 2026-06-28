#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n = 0, choice, i;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Title: ");
            scanf("%s", book[n].title);

            printf("Enter Author Name: ");
            scanf("%s", book[n].author);

            n++;
            printf("Book added successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available in the library.\n");
            } else {
                printf("\n===== Library Books =====\n");
                for (i = 0; i < n; i++) {
                    printf("\nBook %d\n", i + 1);
                    printf("Book ID     : %d\n", book[i].id);
                    printf("Title       : %s\n", book[i].title);
                    printf("Author      : %s\n", book[i].author);
                }
            }
            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
