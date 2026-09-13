#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	int n, k;
	cout << "Enter the Size of Array: ";
	cin >> n;

	vector<int> nums(n);
	cout << "Enter the Values: ";
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	vector<int> prime;
	int sum = 0;
	for(int i : nums) {
		if(isPrime(i)) {
			prime.push_back(i);
			sum = sum + i;
		}
	}

	cout<<"Prime=[";
	for(int p: prime) {
		cout<<p<<",";
	}
	cout<<"]";
	cout<<","<<"Sum="<<sum;

	return 0;
}
