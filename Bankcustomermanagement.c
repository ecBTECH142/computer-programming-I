#include <stdio.h>
#include <string.h>

#define MAX 10 

struct customer {
    int acc_no;
    char name[50];
    float balance;
};
void printLowBalance(struct customer c[], int n) {
    printf("\nCustomers with balance below Rs. 100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("Account No: %d, Name: %s, Balance: %.2f\n", 
                   c[i].acc_no, c[i].name, c[i].balance);
        }
    }
}
void transaction(struct customer c[], int n, int acc, float amount, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].acc_no == acc) {
            if (code == 1) { 
                c[i].balance += amount;
                printf("\nDeposit successful! New balance: %.2f\n", c[i].balance);
            } else if (code == 0) {  
                if (c[i].balance < amount) {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                } else {
                    c[i].balance -= amount;
                    printf("\nWithdrawal successful! New balance: %.2f\n", c[i].balance);
                }
            } else {
                printf("\nInvalid transaction code.\n");
            }
            return;
        }
    }
    printf("\nAccount number %d not found.\n", acc);
}

int main() {
    struct customer c[MAX];
    int n, acc, code;
    float amount;

    printf("Enter number of customers (max %d): ", MAX);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &c[i].acc_no);
        getchar();
        printf("Name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);
        c[i].name[strcspn(c[i].name, "\n")] = '\0'; 
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }
    printLowBalance(c, n);
    printf("\nEnter transaction details:\n");
    printf("Account Number: ");
    scanf("%d", &acc);
    printf("Amount: ");
    scanf("%f", &amount);
    printf("Code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);
    transaction(c, n, acc, amount, code);
    return 0;
}
