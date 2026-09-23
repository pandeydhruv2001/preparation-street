#include <iostream>
#include <cmath>   // for pow
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Sum of squares: 1^2 + 2^2 + ... + n^2
    long long square = (n * (n + 1) * (2 * n + 1)) / 6;

    // Sum of cubes: 1^3 + 2^3 + ... + n^3
    long long cube = pow((n * (n + 1)) / 2, 2);

    // Alternating sum: 1 - 2 + 3 - 4 + ... ± n
    long long alternating;
    if (n % 2 == 0) {
        alternating = -n / 2;
    } else {
        alternating = (n + 1) / 2;
    }

    cout << "Sum of squares=" << square
         << ", Sum of cubes=" << cube
         << ", Alternating=" << alternating << "\n";

    return 0;
}
