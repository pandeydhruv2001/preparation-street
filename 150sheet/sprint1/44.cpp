#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n) {
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } 
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return (second_small == INT_MAX) ? -1 : second_small;
}

int secondLargest(int arr[], int n) {
    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return (second_large == INT_MIN) ? -1 : second_large; 
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    if (sS == -1)
        cout << "No second smallest element exists" << endl;
    else
        cout << "Second smallest is " << sS << endl;

    if (sL == -1)
        cout << "No second largest element exists" << endl;
    else
        cout << "Second largest is " << sL << endl;

    return 0;
}
