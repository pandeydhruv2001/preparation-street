#include <iostream>
#include <string>
using namespace std;

long long int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	long long int fac = n * factorial(n - 1);
	return fac;
}


int main() {
	int input;
	cout<<"Enter a Number";
	cin>>input;
	int fact = factorial(input);
	int digitSum = 0;
	int value = fact;

	while (value > 0) {
		digitSum += value % 10;
		value /= 10;
	}
	cout<<"Factorial ="<<fact<<","<<"Digit Sum ="<<digitSum;
	return 0;
}
