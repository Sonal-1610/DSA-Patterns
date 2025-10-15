#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int minimize_max_pair(vector<int> nums){
    sort(nums.begin(),nums.end()); 
    int i=0;
    int j=nums.size()-1;
    int max=-1;
    while(i<j){
       if(nums[i]+nums[j]>max){
        max=nums[i]+nums[j];
       }
       i++;
       j--;
    }
    return max;

}
int main(){
    vector<int> nums={3,5,4,2,4,6};
    
    int ans=minimize_max_pair(nums);
    cout<<ans;

}
