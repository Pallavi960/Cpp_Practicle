#include<iostream>
#include<vector>
using namespace std;

class calculate_total {
public:
    int Add(int a, int b) {
        return a + b;
    }

    double Add(int a, double b) {
        return a + b;
    }

    double Add(double a, double b) {
        return a + b;
    }
};

int main() {
    calculate_total calc;
    vector<double> s;

    s.push_back(calc.Add(3, 4));           // int, int -> int
    s.push_back(calc.Add(3, 4.5));         // int, double -> double
    s.push_back(calc.Add(2.5, 4.7));       // double, double -> double


    for (int i = 0; i < s.size(); i++) {
        cout << "Result " << i + 1 << ": " << s[i] << endl;
    }
    cout<<"ID:24ce140";

    return 0;
}
