#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout<<"Enter a String: ";
	cin>>s;
	string a;
	a = s;
	reverse(s.begin(),s.end());
	if(a==s) {
		cout<<"true";
	} else {
		cout<<"false";
	}
}
