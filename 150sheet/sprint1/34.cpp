#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int num = n;
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n=n/10;
    }
    if(num%sum==0){
        cout<<"Harshad";
    }else{
        cout<<"Not Harshad";
    }
}
