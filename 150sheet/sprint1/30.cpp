#include <iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the Number: ";
	cin>>N;
	int i = 0;
	while (i < N) {
		for (int j = N; j > i; j--) {
			cout << "*";
		}
		cout<<" ";
		i++;
	}
	return 0;
}
