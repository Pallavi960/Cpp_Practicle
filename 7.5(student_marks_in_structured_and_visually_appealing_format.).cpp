// Function to print the currency symbol
ostream& currency(ostream& out) {
    out << "₹";
    return out;
}

int main() {
    const int size = 3;  // Number of students
    string names[size];
    float marks[size];
    float fees[size];

    // Taking input
    for (int i = 0; i < size; i++) {
        cout << "Enter name, marks, and tuition fee for student " << i + 1 << ": ";
        cin >> names[i] >> marks[i] >> fees[i];
    }

    // Displaying header
    cout << left << setw(15) << "\nName"
         << setw(10) << "Marks"
         << "Tuition Fee" << endl;

    // Displaying data
    for (int i = 0; i < size; i++) {
        cout << left << setw(15) << names[i]
             << fixed << setprecision(2) << setw(10) << marks[i]
             << currency << fixed << setprecision(2) << fees[i] << endl;
    }

    return 0;
}
