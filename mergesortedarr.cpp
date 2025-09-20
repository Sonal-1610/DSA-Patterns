class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> ans;

        // Merge the two arrays
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy merged result back to nums1
        for (int a = 0; a < ans.size(); a++) {
            nums1[a] = ans[a];
        }
    }
};
