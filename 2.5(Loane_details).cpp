#include <iostream>
#include <cmath>   //  pow()
#include <iomanip> // setprecision
using namespace std;

class Loan {
private:
    int loan_id;
    string applicant_name;
    float loan_amount;
    float annual_interest_rate;
    int tenure_months;

public:
    // Default constructor
    Loan() {
        loan_id = 0;
        applicant_name = "default_name";
        loan_amount = 0.0;
        annual_interest_rate = 0.0;
        tenure_months = 0;
    }

    // Parameterized constructor
    Loan(int id, string name, float amount, float rate, int tenure) {
        loan_id = id;
        applicant_name = name;
        loan_amount = amount;
        annual_interest_rate = rate;
        tenure_months = tenure;
    }

    // input loan details
    void inputDetails() {
        cout << "Enter Loan ID: ";
        cin >> loan_id;
        cout << "Enter Applicant Name: ";
        cin.ignore(); // to clear buffer
        getline(cin, applicant_name);
        cout << "Enter Loan Amount: ";
        cin >> loan_amount;
        cout << "Enter Annual Interest Rate (%): ";
        cin >> annual_interest_rate;
        cout << "Enter  months: ";
        cin >> tenure_months;
    }

    //  EMI
    float calculateEMI() {
        float R = annual_interest_rate / (12 * 100); // Monthly interest rate
        int T = tenure_months;
        float P = loan_amount;

        float emi = (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
        return emi;
    }

    // Function to display loan summary
    void displayDetails() {
        cout << fixed << setprecision(2);
        cout <<endl<< "---------------------------------------"<<endl;
        cout << "Loan ID           : " << loan_id << endl;
        cout << "Applicant Name    : " << applicant_name << endl;
        cout << "Loan Amount       : " << loan_amount << endl;
        cout << "Interest Rate     : " << annual_interest_rate << " %" << endl;
        cout << "Tenure            : " << tenure_months << " months" << endl;
        cout << "Monthly EMI       : " << calculateEMI() << endl;
        cout << "---------------------------------------"<<endl;
    }
};

int main() {
    int n;
    cout << "Enter number of loan applications to process: ";
    cin >> n;

    Loan loans[100]; // You can change this size or use vectors

    for (int i = 0; i < n; i++) {
        cout <<endl<< "Enter details for loan " << i + 1 << ":"<<endl;
        loans[i].inputDetails();
    }

    cout <<endl<<"=========== Loan Summaries ==========="<<endl;
    for (int i = 0; i < n; i++) {
        loans[i].displayDetails();
    }
    cout<<"ID:24ce140";

    return 0;
}
