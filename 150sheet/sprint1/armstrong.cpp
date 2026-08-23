#include <iostream>
#include<math.h>
using namespace std;
int digitsCount(int n) {
	if (n == 0) return 1;
	int digits = log10(n) + 1;
	return digits;
}

int isArmstrong(int n) {
	int k = digitsCount(n);
	int s = n;
	int sum = 0;
	while (s > 0) {
		sum = sum + pow(s % 10, k);
		s = s / 10;
	}

	if(sum == n) {
		cout<<"It is an is Armstrong";
	} else {
		cout<<"It is not an isArmstrong";
	}

	return 0;
}
int main()
{
	int n;
	cout<<"Enter a Number";
	cin>>n;
	digitsCount(n);
	isArmstrong(n);
}
