#include <bits/stdc++.h>
using namespace std;
#include <vector>
class sol {
public:
    void reverse(vector<int>& arr, int s, int end) {
        while (s < end) {
            int temp = arr[s];
            arr[s] = arr[end];
            arr[end] = temp;
            s++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int K = k % nums.size();  // Use modulo to handle large k
        reverse(nums, 0, nums.size() - 1);     // Reverse entire array
        reverse(nums, 0, K - 1);               // Reverse first K elements
        reverse(nums, K, nums.size() - 1);     // Reverse remaining elements
    }
};
int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter rotation count: ";
    cin >> k;

    sol s;
    s.rotate(arr, k);  // Rotate in place

    cout << "Rotated array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
