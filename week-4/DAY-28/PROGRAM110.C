#include <stdio.h>

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    // Create Account
    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Current Balance: Rs. %.2f\n", acc.balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                acc.balance += amount;
                printf("Rs. %.2f deposited successfully.\n", amount);
                printf("Updated Balance: Rs. %.2f\n", acc.balance);
            } else {
                printf("Invalid amount!\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount!\n");
            } else if (amount > acc.balance) {
                printf("Insufficient Balance!\n");
            } else {
                acc.balance -= amount;
                printf("Rs. %.2f withdrawn successfully.\n", amount);
                printf("Remaining Balance: Rs. %.2f\n", acc.balance);
            }
            break;

        case 4:
            printf("\n===== Account Details =====\n");
            printf("Account Number : %d\n", acc.accountNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance        : Rs. %.2f\n", acc.balance);
            break;

        case 5:
            printf("Thank you for using the Bank Account System!\n");
            break;

        default:
            printf("Invalid Choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
