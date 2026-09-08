#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number: ";
	cin>>n;
	int i = 0;

	int  num=1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<num<<" ";
			num=num+1;
		}
		cout<<" ";
	}

return 0;
}
