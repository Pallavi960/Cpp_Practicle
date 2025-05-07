#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    int wordCount = 0, charCount = 0;

    while (getline(file, line)) {
        lines.push_back(line);
        charCount += line.length();

        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();

    cout << "Lines: " << lines.size() << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Characters: " << charCount << endl;
    
    cout<<"24CE140";
    return 0;
}
