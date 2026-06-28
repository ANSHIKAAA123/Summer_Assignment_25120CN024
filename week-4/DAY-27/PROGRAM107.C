#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            emp[n].hra = 0.20 * emp[n].basicSalary;   
            emp[n].da = 0.10 * emp[n].basicSalary;    
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            printf("Employee salary details added successfully!\n");
            n++;
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\n===== Salary Details =====\n");
                for (i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID            : %d\n", emp[i].id);
                    printf("Name          : %s\n", emp[i].name);
                    printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                    printf("HRA (20%%)     : %.2f\n", emp[i].hra);
                    printf("DA (10%%)      : %.2f\n", emp[i].da);
                    printf("Gross Salary  : %.2f\n", emp[i].grossSalary);
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
