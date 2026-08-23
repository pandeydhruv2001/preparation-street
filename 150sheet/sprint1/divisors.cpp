#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>  // Needed for sort()

using namespace std;

void divisors(int n) {
    vector<int> list;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            list.push_back(i);
            if (i != n / i) {
                list.push_back(n / i);
            }
        }
    }
    sort(list.begin(), list.end());

    cout << "Divisors of " << n << " are: ";
    for (int d : list) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    divisors(n); 
}
