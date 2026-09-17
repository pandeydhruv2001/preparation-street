#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

int digitsCount(int n) {
	if (n == 0) return 1;
	int digits = log10(n) + 1;
	return digits;
}

bool isArmstrong(int n) {
	int k = digitsCount(n);
	int s = n;
	int sum = 0;
	while (s > 0) {
		sum = sum + pow(s % 10, k);
		s = s / 10;
	}
	return sum == n;
}

int main()
{
	cout<<"Enter a number";
	int num;
	cin>>num;
	for(int i=1; i<=num; i++) {
		if(isArmstrong(i)) {
			cout<<i<<" ";
		}
	}

	return 0;
}
