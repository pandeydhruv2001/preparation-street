#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout<<"Enter a String: ";
    cin>>s; 
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}
