#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

// Structure to hold student record
struct Student {
    string name;
    int marks;
    char grade;
};

// User-defined manipulator for table alignment
ostream& format(ostream& os) {
    os << left << setw(20);
    return os;
}

// Function to load student data from file
bool loadStudentData(const string& filename, vector<Student>& students) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return false;
    }

    Student s;
    while (file >> s.name >> s.marks >> s.grade) {
        students.push_back(s);
    }

    file.close();
    return true;
}

// Function to display formatted report
void displayReport(const vector<Student>& students) {
    cout << format << "Name" << setw(10) << "Marks" << "Grade" << endl;
    cout << "-----------------------------------" << endl;
    for (const auto& s : students) {
        cout << format << s.name << setw(10) << s.marks << s.grade << endl;
    }
}

int main() {
    const string filename = "students.txt";
    vector<Student> students;

    if (!loadStudentData(filename, students)) {
        return 1; // Exit if file couldn't be loaded
    }

    displayReport(students);

    return 0;
}
