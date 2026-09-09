#include <iostream>
#include <string>

using namespace std;

void countVowelsAndConsonants(string s) {
    int vowels = 0;
    int consonants = 0;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') { 
            consonants++;
        }
    }
    
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
}

int main() {
    string s;
    cout<<"Enter a String: ";
    cin>>s; 
    countVowelsAndConsonants(s);
    return 0;
}
