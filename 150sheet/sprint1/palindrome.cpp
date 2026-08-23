#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int num = n;
	int reverse = 0;
	while (n > 0) {
		reverse = (n % 10) + reverse * 10;
		n = n / 10;
	}
	if(reverse==num){
	    cout<<"It is Palindrome";
	}else{
	    cout<<"It is not a Palindrome";
	}
}
