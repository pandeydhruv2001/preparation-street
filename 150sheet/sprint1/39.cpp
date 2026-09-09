#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, W;
    cout << "Enter sentence: ";
    getline(cin, S);
    cout << "Enter word: ";
    cin >> W;

    for (char &c : S) c = tolower(c);
    for (char &c : W) c = tolower(c);

    int count = 0;
    string word = "";

    for (char c : S) {
        if (c != ' ') {
            word += c;
        } else {
            if (word == W) count++;
            word = "";
        }
    }
    
    if (word == W) count++;

    cout << "Occurrences: " << count << endl;
}
