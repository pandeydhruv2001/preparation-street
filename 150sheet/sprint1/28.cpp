#include <iostream>
using namespace std;

int digitalRoot(int n)
{
    if (n == 0)
        return 0;
        
    if (n % 9 == 0)
        return 9;

    return (n % 9);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout << digitalRoot(n);
    return 0;
}
