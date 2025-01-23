#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int k;
    string q;
    cin >> k >> q;

    // Step 1: Identify unique starting characters
    set<char> uniqueChars;
    for (char c : q) {
        uniqueChars.insert(c);
    }

    // Step 2: Check if it's possible to create k substrings
    if (uniqueChars.size() < k) {
        cout << "NO" << endl;
        return 0;
    }

    // Step 3: Create k substrings
    vector<string> substrings;
    set<char> usedChars;
    string current = "";

    for (char c : q) {
        // Start a new substring if the character is new and we need more substrings
        if (usedChars.count(c) == 0 && substrings.size() < k - 1) {
            if (!current.empty()) {
                substrings.push_back(current);
            }
            current = "";
            usedChars.insert(c);
        }
        current += c;
    }
    // Add the last substring
    substrings.push_back(current);

    // Step 4: Output the result
    cout << "YES" << endl;
    for (const string& s : substrings) {
        cout << s << endl;
    }

    return 0;
}
