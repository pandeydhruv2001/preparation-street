#include <iostream>
#include <string>
using namespace std;

// Encode: shift letters forward by K
string caesarEncode(const string &text, int K) {
    string result = "";
    for (char c : text) {
        if (isupper(c)) {
            result += char((c - 'A' + K) % 26 + 'A');
        } else if (islower(c)) {
            result += char((c - 'a' + K) % 26 + 'a');
        } else {
            result += c; // keep spaces/punctuation unchanged
        }
    }
    return result;
}

// Decode: shift letters backward by K
string caesarDecode(const string &text, int K) {
    string result = "";
    for (char c : text) {
        if (isupper(c)) {
            result += char((c - 'A' - K + 26) % 26 + 'A');
        } else if (islower(c)) {
            result += char((c - 'a' - K + 26) % 26 + 'a');
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string message;
    int K;

    cout << "Enter message: ";
    getline(cin, message);
    cout << "Enter shift (K): ";
    cin >> K;

    string encoded = caesarEncode(message, K);
    string decoded = caesarDecode(encoded, K);

    cout << "Encoded: " << encoded << endl;
    cout << "Decoded: " << decoded << endl;

    return 0;
}
