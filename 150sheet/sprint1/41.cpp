#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<pair<char,int>> countFrequencies(vector<char>& nums) {
    map<char,int> map;

    // Count frequencies
    for (auto c : nums) {
        map[c]++;
    }

    // Store results as pairs
    vector<pair<char,int>> frequency;
    for (auto& i : map) {
        frequency.push_back({i.first, i.second});
    }

    return frequency;
}

int main() {
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<char> nums(n);
    cout << "Enter the Values: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<pair<char,int>> freq = countFrequencies(nums);

    cout << "Output: ";
    for (auto& p : freq) {
        cout << p.first;
        if (p.second > 1) {
            cout << p.second;
        }
    }
    cout << endl;

    return 0;
}
