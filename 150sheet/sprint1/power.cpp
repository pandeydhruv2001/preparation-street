#include <iostream>
#include<math.h>
using namespace std;

int powerLoop(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int powerRecursive(int base, int exponent) {
    if (exponent == 0) return 1; 
    return base * powerRecursive(base, exponent - 1);
}

int powerFormula(int base, int exponent){
    return pow(base,exponent);
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result using loop: " << powerLoop(base, exponent) << endl;
    cout << "Result using recursion: " << powerRecursive(base, exponent) << endl;
    cout << "Result using formula: " << powerFormula(base, exponent) << endl;
}
