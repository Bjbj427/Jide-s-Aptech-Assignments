#include <stdio.h>
#include <string.h>

int main() {
    char code[10];
    int mainChoice, subChoice;

    // Ask for USSD code
    printf("Enter USSD code: ");
    scanf("%s", code);

    // Check code
    if (strcmp(code, "*123#") != 0) {
        printf("Invalid USSD code.\n");
        return 0;
    }

    // MAIN MENU
    printf("\nWelcome to f3derals Network\n");
    printf("1. Airtime Services\n");
    printf("2. Data Services\n");
    printf("3. Account Information\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {

        case 1:
            // Airtime Services Menu
            printf("\nAirtime Services\n");
            printf("1. Recharge Airtime\n");
            printf("2. Borrow Airtime\n");
            printf("3. Transfer Airtime\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("You selected Recharge Airtime\n"); break;
                case 2: printf("You selected Borrow Airtime\n"); break;
                case 3: printf("You selected Transfer Airtime\n"); break;
                case 4: printf("Returning to Main Menu...\n"); break;
                default: printf("Invalid option.\n");
            }
            break;

        case 2:
            // Data Services Menu
            printf("\nData Services\n");
            printf("1. Buy Data Plan\n");
            printf("2. Check Data Balance\n");
            printf("3. Get Data Bonus\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("You selected Buy Data Plan\n"); break;
                case 2: printf("You selected Check Data Balance\n"); break;
                case 3: printf("You selected Get Data Bonus\n"); break;
                case 4: printf("Returning to Main Menu...\n"); break;
                default: printf("Invalid option.\n");
            }
            break;

        case 3:
            // Account Information Menu
            printf("\nAccount Information\n");
            printf("1. Check Airtime Balance\n");
            printf("2. Check Bonus Balance\n");
            printf("3. View SIM Registration Status\n");
            printf("4. Back to Main Menu\n");
            printf("Enter choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("You selected Check Airtime Balance\n"); break;
                case 2: printf("You selected Check Bonus Balance\n"); break;
                case 3: printf("You selected View SIM Registration Status\n"); break;
                case 4: printf("Returning to Main Menu...\n"); break;
                default: printf("Invalid option.\n");
            }
            break;

        case 4:
            printf("Exiting USSD...\n");
            break;

        default:
            printf("Invalid option.\n");
    }

    return 0;
}
