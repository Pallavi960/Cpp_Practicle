#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

// Class to represent a Bank Account
class BankAccount {
private:
    string accountHolder;
    double balance;
    vector<string> transactionHistory;

public:
    // Constructor to initialize the bank account
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
        transactionHistory.push_back("Account created with balance: " + to_string(initialBalance));
    }

    // Deposit function
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount. Must be greater than zero.\n";
            logTransaction("Failed deposit attempt of: " + to_string(amount));
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        logTransaction("Deposited: " + to_string(amount));
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount. Must be greater than zero.\n";
            logTransaction("Failed withdrawal attempt of: " + to_string(amount));
            return;
        }
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal denied.\n";
            logTransaction("Failed withdrawal attempt of: " + to_string(amount) + " due to insufficient funds.");
            return;
        }
        balance -= amount;
        cout << "Withdrew: " << amount << ". New balance: " << balance << endl;
        logTransaction("Withdrew: " + to_string(amount));
    }

    // Function to log transactions
    void logTransaction(string message) {
        transactionHistory.push_back(message);
    }

    // Function to print transaction history
    void printTransactionHistory() const {
        cout << "Transaction History for " << accountHolder << ":\n";
        for (const string& transaction : transactionHistory) {
            cout << transaction << endl;
        }
    }

    // Get balance function
    double getBalance() const {
        return balance;
    }
};

// Main function to simulate banking operations
int main() {
    string name;
    double initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Create a bank account for the user
    BankAccount account(name, initialBalance);

    // Perform banking operations
    int choice;
    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Transaction History\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                cout << "Current balance: " << account.getBalance() << endl;
                break;
            case 4:
                account.printTransactionHistory();
                break;
            case 5:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);
    cout<<"24CE140";
    return 0;
}
