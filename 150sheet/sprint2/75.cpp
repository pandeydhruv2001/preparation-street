#include <iostream>
#include <cmath>   // for abs

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of P1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of P2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of P3 (x3 y3): ";
    cin >> x3 >> y3;

    // Shoelace formula for triangle area
    double area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;

    // Check collinearity
    if (area == 0.0) {
        cout << "Collinear, Area = " << area << endl;
    } else {
        cout << "Not collinear, Area = " << area << endl;
    }

    return 0;
}
