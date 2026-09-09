#include <iostream>
#include <string>

using namespace std;

int main() {
	string s,a;
	cout<<"Enter a String I: ";
	cin>>s;
	cout<<"Enter a String II: ";
	cin>>a;
	sort(s.begin(),s.end());
	sort(a.begin(),a.end());
	if(a==s) {
		cout<<"true";
	} else {
		cout<<"false";
	}
}
