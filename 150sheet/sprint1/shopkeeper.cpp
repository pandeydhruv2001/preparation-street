#include<iostream>
using namespace std;

int main(){

//swapping by temp
int temp = a;
a = b;
b = temp;
cout<<"Swapped Values"<<a<<b;
  
//arithmetic 
int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;
cout<<"Sum: "<<a+b;
cout<<"Difference: "<<a-b<<endl;
cout<<"Product: "<<a*b;
cout<<"Quotient: "<<a/b;

//swapping by arithmetic
a=a+b;
b=a-b;
a=a-b;

cout<<"Swapped Values by Arithmetic"<<a<<b;
}
