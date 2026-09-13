#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int length = nums.size();
    int sum2 = 0;
    int sum = (length * (length + 1)) / 2;
    for (auto i : nums) {
        sum2 += i;
    }
    return sum - sum2;
}

vector<int> duplicates(vector<int>& nums) {
    vector<int> dups;
    int k = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[k] != nums[j]) {
            k++;
            nums[k] = nums[j];
        } else {
            dups.push_back(nums[j]); 
        }
    }
    return dups;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing=" << missingNumber(nums);

    vector<int> dups = duplicates(nums);
    cout << ",Duplicate=";
    for (int i = 0; i < dups.size(); i++) {
        cout << dups[i];
        if (i < dups.size() - 1) cout << ",";
    }
    cout << endl;

    return 0;
}
