#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int sequence(vector<int> nums,int target){
       const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<long long> power(n, 1);

        for (int i = 1; i < n; ++i) {
            power[i] = (power[i - 1] * 2) % MOD;
        }

        sort(nums.begin(), nums.end());
        int i = 0, j = n - 1;
        long long ans = 0;

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                ans = (ans + power[j - i]) % MOD;
                ++i;
            } else {
                --j;
            }
        }

        return static_cast<int>(ans);
    
}
int main(){
    vector<int> nums={3,5,6,7};
    int count=sequence(nums,9);
   cout<<count;
    
}