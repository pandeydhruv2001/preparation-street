#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number: ";
	cin>>n;
	int i = 1;
	while (i <= n) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout <<" ";
		i++;
	}

	return 0;
}
