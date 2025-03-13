#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 123;
    int choice = 0;

    do {
        std::cout << "Welcome to Osman banking services\n";
        std::cout << "Option 1: Show balance\n";
        std::cout << "Option 2: Deposit balance\n";
        std::cout << "Option 3: Withdraw balance\n";
        std::cout << "Option 4: Exit service\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);

                showBalance(balance);
                break;
            case 4: 

                std::cout << "Thanks for using Osman banking services\n";
                break;
            default:
                std::cout << "Invalid response. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your balance is: $" << balance << std::endl;
}

double deposit() {
    double amount = 0;

    do {
        std::cout << "Enter the amount to be deposited: ";
        std::cin >> amount;

        if (amount <= 0) {
            std::cout << "Invalid amount. Please enter a positive value.\n";
        }
    } while (amount <= 0);

    return amount;
}

double withdraw(double balance) {
    double amount = 0;

    do {
        std::cout << "Enter the amount to be withdrawn: ";
        std::cin >> amount;

        if (amount > balance) {
            std::cout << "Insufficient balance.\n";
        } else if (amount <= 0) {
            std::cout << "Invalid amount. Please enter a positive value.\n";
        }
    } while (amount > balance || amount <= 0);

    return amount;
}