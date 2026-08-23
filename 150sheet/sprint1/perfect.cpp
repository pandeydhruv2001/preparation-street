#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	int divisorSum=0;
	for(int i=1;i<=n/2;i++){
	    if(n%i==0){
	        divisorSum=divisorSum+i;
	    }
	}
	if(divisorSum==n){
	    cout<<"Perfect";
	}else{
	    cout<<"Not Perfect";
	}
}
