#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the Two Numbers: ";
    cin>>n1>>n2;
    int a,b;
    a = n1;
    b = n2;
    while(n1!=0 && n2!=0){
        if(n1>n2){
            n1 = n1 % n2;
        }else{
            n2 = n2 % n1;
        }
    }
    
    int gcd;
    
    if(n1==0){
        gcd=n2;
    }else{
        gcd=n1;
    }
    
    int lcm = (a*b)/gcd;
    
    cout<<"GCD: "<<gcd<<"\nLCM: "<<lcm;
    
}
