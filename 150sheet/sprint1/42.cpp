#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string &s) {
    unordered_set<char> seen;   // to track characters already encountered
    string result = "";

    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            // first time we see this character
            result += c;
            seen.insert(c);
        }
        // if already seen, skip
    }

    return result;
}

int main() {
    string S;
    cout << "Enter the string: ";
    cin >> S;

    cout << "Output: " << removeDuplicates(S) << endl;

    return 0;
}
