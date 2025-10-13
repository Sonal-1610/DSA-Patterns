#include<iostream>
#include<vector>
using namespace std;
void sequence(vector<int> nums,int index,vector<int> output,vector<vector<int>> &ans){
    
    if(index>=nums.size()){
        ans.push_back(output);
       
         return;
    }
    //exclusion
    sequence(nums,index+1,output,ans);
    //inclusion
    int ele=nums[index];
    output.push_back(ele);
    
    sequence(nums,index+1,output,ans);
     
}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    sequence(nums,0,output,ans);
   
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}