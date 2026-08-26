#include <iostream>
using namespace std;

int main() {
	int A;
	cout << "Enter the Number: ";
	cin>>A;

	for(int i=1; i<=A; i++) {
		if(i%15==0) {
			cout<<"FizzBuzz ";
		}else if(i%5==0){
		    cout<<"Buzz ";
		}else if(i%3==0){
		    cout<<"Fizz ";
		}else{
		    cout<<i<<" ";
		}
	}
	return 0;
}
