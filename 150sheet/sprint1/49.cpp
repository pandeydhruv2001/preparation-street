#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int ind = m + n - 1;

    while (j >= 0) {
        if (i >= 0 && nums1[i] >= nums2[j]) {
            nums1[ind] = nums1[i];
            ind--;
            i--;
        } else {
            nums1[ind] = nums2[j];
            ind--;
            j--;
        }
    }
}

int main() {
    int m, n;
    cout << "Enter size of first array (m): ";
    cin >> m;
    cout << "Enter size of second array (n): ";
    cin >> n;

    vector<int> nums1(m + n); 
    vector<int> nums2(n);

    cout << "Enter " << m << " sorted elements of first array: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter " << n << " sorted elements of second array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
