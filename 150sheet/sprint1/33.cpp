#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows (M): ";
    cin >> rows;
    cout << "Enter columns (N): ";
    cin >> cols;

    for (int r = 1; r <= rows; r++) {
        if (r == 1 || r == rows) {
            // First or last row → all stars
            for (int c = 1; c <= cols; c++) {
                cout << "*";
            }
        } else {
            // Middle rows → star + spaces + star
            cout << "*";                  // left border
            for (int c = 2; c <= cols - 1; c++) {
                cout << " ";              // spaces inside
            }
            cout << "*";                  // right border
        }
        cout << endl; // move to next line
    }

    return 0;
}
