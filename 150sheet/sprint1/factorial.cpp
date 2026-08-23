#include<iostream>
using namespace std;

int main() {

	int N;
	cout<<"Enter N: ";
	cin>>N;

	int factorial = 0;

	if(N==0) {
		factorial=1;
	}

	for(int i=1; i<=N; i++) {
		factorial=factorial*i;
	}
	
	cout<<"Factorial using For Loop: "<<factorial<<endl;
}
