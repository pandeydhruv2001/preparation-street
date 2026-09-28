#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int steps = 0;

    cout << n;  
    while (n != 1) {
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        cout << "-" << n; 
        steps++;
    }

    cout << "\n" << steps << (steps == 1 ? " step" : " steps") << "\n";
    return 0;
}
