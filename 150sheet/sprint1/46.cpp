#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int,int> map;

    for(auto num : nums) {
        map[num]++;
    }

    vector<vector<int>> frequency;

    for(auto& i : map) {
        frequency.push_back({i.first, i.second});
    }

    return frequency;
}

int main() {
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the Values: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> freq = countFrequencies(nums);
    
    for(auto& pair : freq) {
        cout << pair[0] << "-" << pair[1] << "\n";
    }

    return 0;
}
