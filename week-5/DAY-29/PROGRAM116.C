#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No items available.\n");
                }
                else
                {
                    printf("\nID\tName\tQuantity\tPrice\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t\t%.2f\n",
                               item[i].id,
                               item[i].name,
                               item[i].quantity,
                               item[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("\nItem Found!\n");
                        printf("ID: %d\n", item[i].id);
                        printf("Name: %s\n", item[i].name);
                        printf("Quantity: %d\n", item[i].quantity);
                        printf("Price: %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Item Not Found!\n");

                break;

            case 4:
                printf("Enter Item ID to Update: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf("%s", item[i].name);

                        printf("Enter New Quantity: ");
                        scanf("%d", &item[i].quantity);

                        printf("Enter New Price: ");
                        scanf("%f", &item[i].price);

                        printf("Item Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Item Not Found!\n");

                break;

            case 5:
                printf("Enter Item ID to Delete: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            item[j] = item[j + 1];
                        }

                        n--;
                        found = 1;
                        printf("Item Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Item Not Found!\n");

                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
