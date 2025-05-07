#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> dir;

    dir["ProjectA"] = {"main.cpp", "utils.cpp"};
    dir["Docs"] = {"README.md", "INSTALL.txt"};
    dir["ProjectB"] = {"app.cpp"};

    for (auto folder : dir) {
        cout << folder.first << ":\n";
        for (auto file : folder.second) {
            cout << "  " << file << "\n";
        }
    }
  cout<<"24CE140";
    return 0;
}
