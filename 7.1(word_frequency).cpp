#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
// Converts string to lowercase
void toLowerCase(char* str) {
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
}
// Checks if character is a word separator
bool isSeparator(char ch) {
	return !isalpha(ch);

}
int main() {
	const int MAX_LEN = 1000;
	char text[MAX_LEN];
	cout << "Enter a paragraph:\n";
	cin.getline(text, MAX_LEN);
	toLowerCase(text); // Make it case-insensitive
// Dynamic arrays to hold words and their counts
	char** words = new char*[100];
	int* counts = new int[100];
	int wordCount = 0;
	char* token = strtok(text, " ,.!?\n");
	while (token) {
		bool found = false;
        // Check if word already exists
		for (int i = 0; i < wordCount; i++) {
			if (strcmp(words[i], token) == 0) {
				counts[i]++;
				found = true;
				break;
			}
		}
        // New word
		if (!found) {
			words[wordCount] = new char[strlen(token) + 1];
			strcpy(words[wordCount], token);
			counts[wordCount] = 1;
			wordCount++;
		}
		token = strtok(nullptr, " ,.!?\n");
	}
// Display result
	cout << "\nWord frequencies:\n";
	for (int i = 0; i < wordCount; i++) {
		cout << words[i] << ": " << counts[i] << endl;
		delete[] words[i]; // free each word
	}
	delete[] words;
	delete[] counts;
	return 0;
}
