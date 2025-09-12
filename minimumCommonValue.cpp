#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0; // Pointer for nums1
        int j = 0; // Pointer for nums2

        // Traverse both arrays simultaneously
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++; // Move forward in nums1
            }
            else if (nums1[i] > nums2[j]) {
                j++; // Move forward in nums2
            }
            else {
                // nums1[i] == nums2[j] => Found first common element
                return nums1[i];
            }
        }

        // No common element found
        return -1;
    }
};

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of first array (sorted): ";
    for (int i = 0; i < n; i++) cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of second array (sorted): ";
    for (int i = 0; i < m; i++) cin >> nums2[i];

    Solution sol;
    int ans = sol.getCommon(nums1, nums2);

    if (ans != -1)
        cout << "First common element: " << ans << endl;
    else
        cout << "No common element found." << endl;

    return 0;
}
