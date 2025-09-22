#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp; // Store number -> index

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i]; // Remaining value needed
            if (mp.find(rem) != mp.end()) {
                // Found the pair
                return {i, mp[rem]};
            }
            // Store current number with its index
            mp[nums[i]] = i;
        }

        return {}; // No pair found
    }
};

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter target: ";
    cin >> target;

    Solution sol;
    vector<int> ans = sol.twoSum(nums, target);

    if (!ans.empty())
        cout << "Indices of two numbers: " << ans[0] << " " << ans[1] << endl;
    else
        cout << "No valid pair found." << endl;

    return 0;
}
