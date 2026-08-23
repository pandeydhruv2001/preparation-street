#include<iostream>
using namespace std;

int main(){

int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;

//swapping by arithmetic
a=a+b; 
b=a-b; 
a=a-b; 


cout<<"Swapped Values by Arithmetic: "<<a<<b;
}
