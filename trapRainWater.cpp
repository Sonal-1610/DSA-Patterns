#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> pre(n); // prefix max
        vector<int> suf(n); // suffix max

        int ans = 0;
        int element = 0;

        // Step 1: Build prefix max array
        for (int i = 0; i < n; i++) {
            element = max(height[i], element);
            pre[i] = element;
        }

        // Step 2: Build suffix max array
        element = 0;
        for (int i = n - 1; i >= 0; i--) {
            element = max(height[i], element);
            suf[i] = element;
        }

        // Step 3: Calculate trapped water
        for (int i = 0; i < n; i++) {
            int waterLevel = min(pre[i], suf[i]); // max water level at i
            ans += (waterLevel - height[i]);     // add trapped water
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter bar heights: ";
    for (int i = 0; i < n; i++) cin >> height[i];

    Solution sol;
    cout << "Total trapped water: " << sol.trap(height) << endl;

    return 0;
}
