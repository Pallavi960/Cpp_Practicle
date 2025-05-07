#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> transactions = {102, 304, 102, 208, 304, 501, 208, 999};
    set<int> uniqueTransactions;

    for (int id : transactions) {
        uniqueTransactions.insert(id);
    }

    cout << "Unique Transaction IDs (Sorted):\n";
    for (int id : uniqueTransactions) {
        cout << id << " ";
    }
    cout<<"24CE140";
    return 0;
}
