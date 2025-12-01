#include <stdio.h>

int main() {
    int pin, correctPin = 1234;
    int validInput;
    int choice;
    float balance = 1000.0;
    float amount;

    // --- PIN VALIDATION LOOP ---
    while (1) {
        printf("Enter your PIN: ");
        validInput = scanf("%d", &pin);

        // If user enters letters or symbols
        if (validInput == 0) {
            while (getchar() != '\n'); // clear buffer
            printf("Invalid input! Numbers only.\n");
            continue;
        }

        if (pin == correctPin) {
            printf("PIN accepted.\n\n");
            break;
        } else {
            printf("Incorrect PIN. Try again.\n");
        }
    }

    // --- MAIN MENU LOOP ---
    while (1) {
        printf("ATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        validInput = scanf("%d", &choice);

        // Validate choice input
        if (validInput == 0) {
            while (getchar() != '\n');
            printf("Invalid input! Enter numbers only.\n\n");
            continue;
        }

        switch (choice) {

            case 1:
                printf("Your current balance is: $%.2f\n\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                validInput = scanf("%f", &amount);

                if (validInput == 0) {
                    while (getchar() != '\n');
                    printf("Invalid amount! Must be a number.\n\n");
                    continue;
                }

                if (amount <= 0) {
                    printf("Enter a positive amount.\n\n");
                }
                else if (amount > balance) {
                    printf("Insufficient funds!\n\n");
                }
                else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                validInput = scanf("%f", &amount);

                if (validInput == 0) {
                    while (getchar() != '\n');
                    printf("Invalid amount! Must be a number.\n\n");
                    continue;
                }

                if (amount <= 0) {
                    printf("Enter a positive amount.\n\n");
                }
                else {
                    balance += amount;
                    printf("Deposit successful. New balance: $%.2f\n\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid option! Choose between 1–4.\n\n");
        }
    }

    return 0;
}
