#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    
    int count = log10(n) + 1;

    cout<<count;
}
