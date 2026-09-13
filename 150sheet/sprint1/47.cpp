#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }

int main() {
    int n, k;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the Values: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k";
    cin >> k;

    rotateArray(nums, k);

    cout << "Rotated Array: ";
    for(auto num : nums){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
