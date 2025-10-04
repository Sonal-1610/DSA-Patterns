#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            while(i>0 &&i<n-2 && nums[i]==nums[i-1]){
                i++;
            }
           int ans=0;
           int j=i+1;
           int k=n-1;
        while(j<k){
           
            ans=nums[i]+nums[j]+nums[k];
           if(ans==0){
              v.push_back({nums[i],nums[j],nums[k]});
              j++;
              k--;
               while(j<k &&  nums[j]==nums[j-1]){
            j++;
            }
            while(j<k &&  nums[k]==nums[k-1]){
            k--;
            }
           }
           else if(ans>0){
            k--;
           }
           else{
            j++;
           }
        }
            
        }
        return v;
    }
};


int main() {
    Solution obj;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = obj.threeSum(nums);

    cout << "Triplets:\n";
    for (auto &triplet : result) {
        for (auto val : triplet) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
