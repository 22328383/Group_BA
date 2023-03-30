#include <stdio.h>
#include <stdlib.h>
#include "kanban.h"

void DisplayMenu() {
    int choice = 0;
    printf("Menu:\n");
    printf("1. Display board\n");
    printf("2. Load board from a file\n");
    printf("3. Edit list\n");
    printf("4. Edit Board\n");
    printf("5. Save board to a file\n");
    printf("6. Quit\n");
    while (choice < 1 || choice > 6) {
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Displaying example!");
        }
        if (choice == 2) {
            printf("Loading board from file!");
        }
        if (choice == 3) {
            printf("Editing list!");
        }
        if (choice == 4) {
            printf("Editing board!");
        }
        if (choice == 5) {
            printf("Saving board to a file!");
        }
        if (choice == 6) {
            printf("Exiting!");
            exit(0);
        }
    }
}
