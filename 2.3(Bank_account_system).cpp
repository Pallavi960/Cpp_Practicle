#include<iostream>
using namespace std;

class Bank_account {
    string Acc_holder_name;
    int Acc_number;
    double balance;

public:
    // Constructor with default balance
    Bank_account(int Acc_number, string Acc_holder_name) {
        this->Acc_number = Acc_number;
        this->Acc_holder_name = Acc_holder_name;
        balance = 100;
    }

    // Constructor with balance
    Bank_account(int Acc_number, string Acc_holder_name, double balance) {
        this->Acc_number = Acc_number;
        this->Acc_holder_name = Acc_holder_name;
        this->balance = balance;
    }

    void display_Acc() {//display details function
        cout << "************************" << endl;
        cout << "Account holder's name: " << Acc_holder_name << endl;
        cout << "Account number: " << Acc_number << endl;
        cout << "Balance: " << balance << endl;
        cout << "************************" << endl;
    }

    void deposit_amount(double amount) {
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
        cout << "Current balance: " << balance << endl;
    }

    void withdraw_Amount(double amount) {
        if (balance < amount) {
            cout << "Sufficient balance is not available in account!" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
            cout << "Current balance: " << balance << endl;
        }
    }
};

int main() {
    string name;
    int number;
    double balance;
    double amount;

    cout << "Enter details for account 1" << endl;
    cout << "Enter Account number: ";
    cin >> number;
    cout << "Enter Account holder's name: ";
    cin >> name;
    Bank_account acc1(number, name);

    cout << "Enter details for account 2" << endl;
    cout << "Enter Account number: ";
    cin >> number;
    cout << "Enter Account holder's name: ";
    cin >> name;
    cout << "Enter Account balance: ";
    cin >> balance;
    Bank_account acc2(number, name, balance);

    while (true) {
        cout << "----------------------------------" << endl;
        cout << "Enter 1 for deposit amount" << endl;
        cout << "Enter 2 for withdraw amount" << endl;
        cout << "Enter 3 to display account details" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "----------------------------------" << endl;

        int c, n;
        cout << "Enter choice: ";
        cin >> c;

        if (c == 0) {
            cout << "Program exit.... thank you!" << endl;
            break;
        }

        //here we have only acc1 and acc2
        if (c == 1 || c == 2 || c == 3) {
            cout << "Enter 1 for account 1 or 2 for account 2: ";
            cin >> n;
        }

        switch (c) {
            case 1: {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (n == 1) {
                    acc1.deposit_amount(amount);
                } else {
                    acc2.deposit_amount(amount);
                }
                break;
            }
            case 2: {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (n == 1) {
                    acc1.withdraw_Amount(amount);
                } else {
                    acc2.withdraw_Amount(amount);
                }
                break;
            }
            case 3: {
                if (n == 1) {
                    acc1.display_Acc();
                } else {
                    acc2.display_Acc();
                }
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
