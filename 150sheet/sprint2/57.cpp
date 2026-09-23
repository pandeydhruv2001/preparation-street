#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long total = 0;
    for (long long i = 1; i <= n; i++) {
        total += i * (n / i);       // i divides n/i numbers
    }
    cout << total << "\n";
    return 0;
}
