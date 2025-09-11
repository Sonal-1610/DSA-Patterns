#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int i = 0;                  // Left pointer
        int j = arr.size() - 1;     // Right pointer
        int end = j;                // Fill result from the end
        vector<int> ans(arr.size()); // Allocate result vector

        // Two-pointer approach
        while (i <= j) {
            int left = arr[i] * arr[i];
            int right = arr[j] * arr[j];

            if (left < right) {
                // Place bigger square at the end
                ans[end] = right;
                j--;
            } else {
                // Place left square if it's bigger or equal
                ans[end] = left;
                i++;
            }
            end--; // Move to next position from end
        }

        return ans; // Return the sorted squares
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    vector<int> result = sol.sortedSquares(arr);

    cout << "Sorted squares: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
