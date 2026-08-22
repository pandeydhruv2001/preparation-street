#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;
cout<<"Sum: "<<a+b;
cout<<"Difference: "<<a-b<<endl;
cout<<"Product: "<<a*b;
cout<<"Quotient: "<<a/b;

int temp = a;
a = b;
b = temp;
cout<<"Swapped Values"<<a<<b;
}
