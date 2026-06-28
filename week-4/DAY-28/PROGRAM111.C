#include <stdio.h>

int main() {
    int totalSeats = 50;
    int choice, tickets;
    float ticketPrice = 250.0, totalAmount;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Check Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Available Seats: %d\n", totalSeats);
            break;

        case 2:
            printf("Enter number of tickets to book: ");
            scanf("%d", &tickets);

            if (tickets <= 0) {
                printf("Invalid number of tickets!\n");
            } else if (tickets > totalSeats) {
                printf("Sorry! Only %d seats are available.\n", totalSeats);
            } else {
                totalSeats -= tickets;
                totalAmount = tickets * ticketPrice;

                printf("\nBooking Successful!\n");
                printf("Tickets Booked : %d\n", tickets);
                printf("Ticket Price   : Rs. %.2f\n", ticketPrice);
                printf("Total Amount   : Rs. %.2f\n", totalAmount);
                printf("Remaining Seats: %d\n", totalSeats);
            }
            break;

        case 3:
            printf("Thank you for using the Ticket Booking System!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
