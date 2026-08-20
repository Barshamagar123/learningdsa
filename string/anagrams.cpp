#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string word1;
    string word2;

    cout << "Enter the first word: ";
    cin >> word1;

    cout << "Enter the second word: ";
    cin >> word2;

    // First check if both words have the same length
    if (word1.length() != word2.length()) {
        cout << "Not Anagram";
    }
    else {
        // Sort both words
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        // Compare the sorted words
        if (word1 == word2) {
            cout << "Anagram";
        }
        else {
            cout << "Not Anagram";
        }
    }

    return 0;
}