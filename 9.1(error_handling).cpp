#include <iostream>
#include <limits>
using namespace std;

int main() {
    double loan = 0.0, income = 0.0;

    // Get loan amount
    while (true) {
        cout << "Enter loan amount: ";
        cin >> loan;

        if (cin.fail() || loan < 0) {
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Get annual income
    while (true) {
        cout << "Enter annual income: ";
        cin >> income;

        if (cin.fail() || income <= 0) {
            cout << "Invalid input. Income must be a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Calculate ratio
    double ratio = loan / income;
    cout << "Loan-to-Income Ratio: " << ratio << endl;
    cout<<"24Ce140";

    return 0;
}
