#include<iostream>
using namespace std;

int main() {

	int N = 100;
	int sum = 0;

	for(int i=0; i<=N; i++) {
		sum=sum+i;
	}

	int i = 0;
	int whilesum=0;
	while(N+1>i) {
		whilesum = i+whilesum;
		i++;
	}


	cout<<"Sum using For Loop: "<<sum<<endl;
	cout<<"Sum using While Loop: "<<whilesum<<endl;
	cout<<"Sum using Gauss Method: "<<N*(N+1)/2<<endl;
}
