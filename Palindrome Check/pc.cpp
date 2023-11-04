#include <iostream>
#include <string>
#include <cctype>  // For std::tolower

using namespace std;

bool isPalindrome(const string &word) {
    string cleanWord;

    // Remove spaces and convert to lowercase for case-insensitive comparison
    for (char ch : word) {
        if (!isspace(ch)) {
            cleanWord += tolower(ch);
        }
    }

    int start = 0;
    int end = cleanWord.length() - 1;

    while (start < end) {
        if (cleanWord[start] != cleanWord[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    string userWord;
    cout << "Enter a word: ";
    cin >> userWord;

    if (isPalindrome(userWord)) {
        cout << "YES, IT IS PALINDROME" << endl;
    } else {
        cout << "NO, IT IS NOT A PALINDROME" << endl;
    }

    return 0;
}