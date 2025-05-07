#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

string cleanWord(const std::string& word) {
	string cleaned;
	for (char ch : word) {
		if (isalnum(ch))
			cleaned += std::tolower(ch);
	}
	return cleaned;
}

int main() {
	string input = "A digital publishing company is developing a tool to analyze text content for word frequency distribution.";

	map<std::string, int> wordFrequency;
	stringstream ss(input);
	string word;

	while (ss >> word) {
		std::string cleaned = cleanWord(word);
		if (!cleaned.empty())
			wordFrequency[cleaned]++;
	}

	cout << "Word Frequency Distribution:\n";
	for (const auto& pair : wordFrequency) {
		cout << pair.first << ": " << pair.second << "\n";
	}
	cout<<"24CE140";

	return 0;
}
