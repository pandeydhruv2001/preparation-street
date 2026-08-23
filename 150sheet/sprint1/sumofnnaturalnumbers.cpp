#include<iostream>
using namespace std;

int main(){

int N = 100;
int sum = 0;

for(int i=0;i<=N;i++){
    sum=sum+i;
}

cout<<"Sum using Loops: "<<sum<<endl;
cout<<"Sum using Gauss Method: "<<N*(N+1)/2<<endl;
}
