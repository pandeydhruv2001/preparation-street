#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Enter coordinates of P1 (x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of P2 (x2,y2): ";
    cin >> x2 >> y2;

    double euclidean = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    double manhattan = abs(x2 - x1) + abs(y2 - y1);

    cout << "Euclidean Distance = " << euclidean << endl;
    cout << "Manhattan Distance = " << manhattan << endl;

    return 0;
}
