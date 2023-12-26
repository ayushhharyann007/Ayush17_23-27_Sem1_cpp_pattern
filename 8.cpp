//Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.

#include <iostream>

using namespace std;

int main() {
    float balance = 1000.0; // Initial account balance
    int choice;
    float amount;

    cout << "Welcome to the Simple ATM Machine" << endl;

    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: $" << balance << endl;
                break;

            case 2:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: $" << balance << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive amount for deposit." << endl;
                }
                break;

            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive amount for withdrawal." << endl;
                } else {
                    cout << "Insufficient balance. Your current balance is: $" << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please select a valid option (1-4)." << endl;
                break;
        }
    }

    return 0;
}
