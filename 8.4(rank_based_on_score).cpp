#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, int>> students = {
        {"pallavi", 85},
        {"Aemi", 92},
        {"Nisha", 78},
        {"Drashti", 92},
        {"Nishtha", 88}
    };

    sort(students.begin(), students.end(), [](auto a, auto b) {
        return a.second > b.second;
    });

    int rank = 1;
    for (auto student : students) {
        cout << rank << ". " << student.first << " - " << student.second << "\n";
        rank++;
    }
    cout<<"24ce140";

    return 0;
}


