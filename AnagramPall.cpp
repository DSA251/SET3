#include <iostream>
#include <unordered_map>
using namespace std;

bool canFormPalindrome(const string &s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    int oddCount = 0;

    for (const auto &pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        if (canFormPalindrome(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
