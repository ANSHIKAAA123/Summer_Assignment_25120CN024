#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[100];
    int count = 0, choice, i, found;
    char searchName[50];

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Name: ");
            scanf(" %[^\n]", contacts[count].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);

            printf("Enter Email: ");
            scanf("%s", contacts[count].email);

            count++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("\nNo Contacts Available.\n");
            }
            else
            {
                printf("\n------ Contact List ------\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    printf("Email: %s\n", contacts[i].email);
                }
            }
            break;

        case 3:
            if (count == 0)
            {
                printf("\nNo Contacts Available.\n");
                break;
            }

            found = 0;
            printf("\nEnter Name to Search: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < count; i++)
            {
                if (strcmp(searchName, contacts[i].name) == 0)
                {
                    printf("\nContact Found!\n");
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    printf("Email: %s\n", contacts[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 4:
            if (count == 0)
            {
                printf("\nNo Contacts Available.\n");
                break;
            }

            found = 0;
            printf("\nEnter Name to Delete: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < count; i++)
            {
                if (strcmp(searchName, contacts[i].name) == 0)
                {
                    int j;
                    for (j = i; j < count - 1; j++)
                    {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Contact Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 5:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
