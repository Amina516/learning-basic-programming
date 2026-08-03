#include <stdio.h>

int main()
{
    int choice;
    int pin, attempts = 0;
    float balance = 5000.0, amount;
    float totalDeposit = 0, totalWithdraw = 0;

    while (attempts < 3)
    {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("Login Successful!\n");
            break;
        }
        else
        {
            attempts++;
            printf("Wrong PIN!\n");
        }
    }

    if (attempts == 3)
    {
        printf("ATM Blocked!\n");
        return 0;
    }

    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance += amount;
                    totalDeposit += amount;
                    printf("Deposit Successful!\n");
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if (amount <= balance && amount > 0)
                {
                    balance -= amount;
                    totalWithdraw += amount;
                    printf("Please Collect Cash\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\n------ RECEIPT ------\n");
                printf("Final Balance : %.2f\n", balance);
                printf("Total Deposit : %.2f\n", totalDeposit);
                printf("Total Withdraw: %.2f\n", totalWithdraw);
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}