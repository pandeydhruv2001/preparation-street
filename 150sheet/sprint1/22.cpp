#include <iostream>
using namespace std;

int main() {
    double T;   
    char S;    
    cout<<"Enter the Temperature and Scale (C/F/K): ";
    cin>>T>>S;
    double Celsius;
    switch(S) {
        case 'C':
            Celsius = T;
            break;
        case 'F':
            Celsius = (T - 32) * 5/9;
            break;
        case 'K':
            Celsius = T - 273.15;
            break;
        default:
            cout << "Invalid scale entered!" << endl;
            return 0;
    }
    double Fahrenheit = (Celsius * 9/5) + 32;
    double Kelvin = Celsius + 273.15;
    cout <<"Celsius: "<<Celsius<<endl;
    cout <<"Fahrenheit: "<<Fahrenheit<<endl;
    cout << "Kelvin: " <<Kelvin<<endl;

    return 0;
}
