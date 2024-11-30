#include <stdio.h>

typedef struct {
    int accountNumber;
    char accountHolder[100];
    double balance;
} BankAccount;

void showAccount(BankAccount acc) {
    printf("Account Number: %d, Holder: %s, Balance: %.2lf\n", acc.accountNumber, acc.accountHolder, acc.balance);
}

int main() {
    BankAccount account1 = {123456, "Jane Roe", 2000.00};
    showAccount(account1);
    return 0;
}