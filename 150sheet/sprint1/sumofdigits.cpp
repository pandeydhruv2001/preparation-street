#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n=n/10;
    }
    cout<<sum;
}
