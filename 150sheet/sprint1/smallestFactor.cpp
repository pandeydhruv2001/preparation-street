#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int i = 2;
	int smallestFactor;
	while(i<n) {
		if(n%i==0) {
			smallestFactor = i;
			break;
		}
		i++;
	}
	cout<<smallestFactor;
	return 0;
}
