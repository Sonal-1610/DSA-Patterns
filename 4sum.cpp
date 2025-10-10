#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <vector<int>> foursum(vector<int> &nums,int target){
   vector <vector<int>> ans;
   
    int n=nums.size();
sort(nums.begin(),nums.end());
for(int i=0;i<n-3;i++){
      if(i>0&&nums[i]==nums[i-1]){
                   i++;
                }
    for(int j=i+1;j<n-2;j++){
          while(j>i+1&&nums[j]==nums[j-1]){
                    j++;
                }
        int k=j+1;
        int l=n-1;
        while(k<l){
            int sum=nums[i]+nums[j]+nums[k]+nums[l];
            if(sum>target){
                l--;
            }
            else if(sum<target){
                k++;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                k++;
                l++;
                while(k<l&&nums[k]==nums[k-1]){
                    k++;
                }
                  while(k<l&&nums[l]==nums[l+1]){
                    l--;
                }
            }
        }
    }
}
return ans;
}
    
int main(){
    cout<<"hello";
    vector<int> nums={1,0,-1,0,-2,2};
   vector <vector<int>> ans=foursum(nums,0);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
   
   }
}