#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available;   // 1 = Available, 0 = Issued
};

int main()
{
    struct Book book[100];
    int n = 0, choice, id, i, found;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Title: ");
                scanf("%s", book[n].title);

                printf("Enter Author Name: ");
                scanf("%s", book[n].author);

                book[n].available = 1;
                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\n--------------------------------------------------\n");
                    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
                    printf("--------------------------------------------------\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%s\t\t%s\n",
                               book[i].id,
                               book[i].title,
                               book[i].author,
                               book[i].available ? "Available" : "Issued");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("ID     : %d\n", book[i].id);
                        printf("Title  : %s\n", book[i].title);
                        printf("Author : %s\n", book[i].author);
                        printf("Status : %s\n",
                               book[i].available ? "Available" : "Issued");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        found = 1;

                        if(book[i].available)
                        {
                            book[i].available = 0;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Already Issued!\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        found = 1;

                        if(book[i].available == 0)
                        {
                            book[i].available = 1;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Available!\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 6:
                printf("Enter Book ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            book[j] = book[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Book Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 7:
                printf("Thank You! Exiting Library System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}
