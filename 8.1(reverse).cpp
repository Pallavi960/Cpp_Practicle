#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Using std::reverse
    vector<int> reversed1 = nums;
    reverse(reversed1.begin(), reversed1.end());
    cout << "\nUsing std::reverse(): ";
    for (int x : reversed1) {
        cout << x << " ";
    }

    // Manual reverse using iterators
    vector<int> reversed2 = nums;
    auto start = reversed2.begin();
    auto end = reversed2.end() - 1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }

    cout << "\nUsing iterator swap:   ";
    for (int x : reversed2) {
        cout << x << " ";
    }
    cout<<endl;
    cout<<"24CE140";

    return 0;
}
