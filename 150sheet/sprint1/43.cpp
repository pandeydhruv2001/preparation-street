#include <iostream>
#include <algorithm>
#include <vector>  
#include <numeric> 

using namespace std;

int main()
{
    vector<int> a;
    int n, element;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> element;
        a.push_back(element); 
    }

    int sum = accumulate(a.begin(), a.end(), 0);
    
    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());

    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum/n << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
