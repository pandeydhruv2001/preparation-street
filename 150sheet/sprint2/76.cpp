#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const string DIGITS = "0123456789ABCDEF";

string toBase(long long n, int b) {
    if (n == 0) return "0";
    string out;
    while (n > 0) {
        out += DIGITS[n % b];
        n /= b;
    }
    reverse(out.begin(), out.end());
    return out;
}

long long fromBase(const string &s, int b) {
    long long value = 0;
    for (char ch : s) value = value * b + (long long) DIGITS.find(ch);
    return value;
}

int main() {
    long long n;
    int b;
    cin >> n >> b;
    string res = toBase(n, b);
    if (fromBase(res, b) != n) return 1;     // round trip check
    cout << res << "\n";
    return 0;
}
