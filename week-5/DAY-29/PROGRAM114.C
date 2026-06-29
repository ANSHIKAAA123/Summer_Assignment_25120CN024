#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;
    int sum = 0, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Search Element\n");
        printf("6. Update Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n)
                    printf("Element not found.\n");
                break;

            case 6:
                printf("Enter position (1 to %d): ", n);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n) {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[pos - 1] = value;
                    printf("Element updated successfully.\n");
                } else {
                    printf("Invalid Position!\n");
                }
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
