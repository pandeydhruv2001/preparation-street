#include <iostream>
using namespace std;
int main()
{   int A,B,C;
	cout<<"Enter the Three Sides: ";
	cin>>A>>B>>C;

	if(A+B>C || C+B>A || A+C>B) {
		if(A==B && B==C) {
			cout<<"Valid - Equilateral";
		}else if(A==B || B==C || A==C  ){
		    cout<<"Valid - Isosceles";
		}else {
		    cout<<"Valid - Scalene";
		}
	}
	return 0;
}
