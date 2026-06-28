#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Student Details:\n");
            for (i = 0; i < n; i++) {
                printf("\nStudent %d\n", i + 1);

                printf("Enter Roll Number: ");
                scanf("%d", &s[i].rollNo);

                printf("Enter Name: ");
                scanf("%s", s[i].name);

                printf("Enter Marks: ");
                scanf("%f", &s[i].marks);
            }
            printf("\nStudent records added successfully!\n");
            break;

        case 2:
            printf("\n===== Student Records =====\n");

            if (n == 0) {
                printf("No records available.\n");
            } else {
                for (i = 0; i < n; i++) {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", s[i].rollNo);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice! Try Again.\n");
        }

    } while (choice != 3);

    return 0;
}
