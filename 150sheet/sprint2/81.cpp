#include <iostream>
using namespace std;

void pattern7(int n) {
	int i = 1;
	while (i <= n) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
		i++;
	}
}

void pattern8(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * n - 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


int main() {
	int n;
	cout << "Enter number of rows: ";
	cin >> n;

	pattern7(n);
	pattern8(n);

	return 0;
}
