#include <iostream>
using  namespace std;
int main()
{
	cout<<"Enter the Three Conditions: ";
	int A,B,D;
	cin>>A>>B>>D;

	if(A>18 && B==1 && D==0) {
		cout<<"Eligible";
	} else if(A<18) {
		cout<<"Not Eligible - Too Young";
	} else if(B!=1) {
		cout<<"Not Eligible - Citizenship Invalid";
	} else if(D==1) {
		cout<<"Not Eligible - Disqualified";
	}

	return 0;
}
