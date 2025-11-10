#include <stdio.h>

int main() {
    int choice;
    int task1 = 0, task2 = 0; // 0 = unchecked, 1 = checked

    do {
        printf("\n--- To-Do List ---\n");
        printf("1. [%c] Buy groceries\n", task1 ? 'x' : ' ');
        printf("2. [%c] Clean room\n", task2 ? 'x' : ' ');
        printf("3. Exit\n");

        printf("Enter task number to toggle: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                task1 = !task1;
                break;
            case 2:
                task2 = !task2;
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
