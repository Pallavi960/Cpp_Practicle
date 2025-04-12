#include<iostream>
using namespace std;

class Bank_account {
private:
    string name;
    int account_no;
    double balance;

    //get data
    void get_input() {
        cout << "Enter name: ";
       cin>>name;

        cout << "Enter account number: ";
        cin >> account_no;

        cout << "Enter balance: ";
        cin >> balance;

        cout << "Account added successfully!" << endl;
    }

    //deposite amount
    void Deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Amount deposited successfully!" << endl;
        cout << "Total balance: " << balance << " Rupees" << endl;
    }

    //withdraw amount
    void Withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }

        if (balance < amount)
            cout << "Insufficient funds available" << endl;
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
            cout << "Total balance: " << balance << " Rupees" << endl;
        }
    }

public:
    void view_balance() {//access private method
        cout << "Balance: " << balance << " Rupees" << endl;
    }

    void get_data() {//access private method
        get_input();
    }

    void deposit(double amount) {//access private method
        Deposit(amount);
    }

    void withdraw(double amount) {//access private method
        Withdraw(amount);
    }
};

int main() {
    int c;
    double amount;
    Bank_account person;

    //Enter choice
    cout << "Enter (1) to add account" << endl;
    cout << "Enter (2) to deposit" << endl;
    cout << "Enter (3) to withdraw" << endl;
    cout << "Enter (4) to check balance" << endl;
    cout << "Enter (0) to exit" << endl;

    while (true) {
        cout << "\nEnter your choice: ";
        cin >> c;

        if (c == 0) {
            cout << "Thank you!" << endl;
            break;
        }

        //swith case statemanet to work according to choice
        switch (c) {
            case 1:
                person.get_data();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                person.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                person.withdraw(amount);
                break;
            case 4:
                person.view_balance();
                break;
            default:
                cout << "Invalid choice, try again!" << endl;
        }
    }

    return 0;
}
