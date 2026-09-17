#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double circleArea(double r) {
	return PI * r * r;
}
double circlePerimeter(double r) {
	return 2 * PI * r;
}

double rectangleArea(double l, double w) {
	return l * w;
}
double rectanglePerimeter(double l, double w) {
	return 2 * (l + w);
}

double triangleArea(double a, double b, double c) {
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
double trianglePerimeter(double a, double b, double c) {
	return a + b + c;
}

int main() {
	cout << "Area and Perimeter of Basic Shapes\n";
	cout << "1. Circle\n";
	cout << "2. Rectangle\n";
	cout << "3. Triangle\n";
	cout << "Enter your choice: ";

	int choice;
	cin >> choice;

	if (choice == 1) {
		double r;
		cout << "Enter radius: ";
		cin >> r;
		cout << "Area = " << circleArea(r)
		     << ", Perimeter = " << circlePerimeter(r) << "\n";
	} else if (choice == 2) {
		double l, w;
		cout << "Enter length: ";
		cin >> l;
		cout << "Enter width: ";
		cin >> w;
		cout << "Area = " << rectangleArea(l, w)
		     << ", Perimeter = " << rectanglePerimeter(l, w) << "\n";
	} else if (choice == 3) {
		double a, b, c;
		cout << "Enter side a: ";
		cin >> a;
		cout << "Enter side b: ";
		cin >> b;
		cout << "Enter side c: ";
		cin >> c;
		cout << "Area = " << triangleArea(a, b, c)
		     << ", Perimeter = " << trianglePerimeter(a, b, c) << "\n";
	} else {
		cout << "Invalid choice.\n";
	}

	return 0;
}
