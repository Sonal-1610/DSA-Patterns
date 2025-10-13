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
    int target=9;
    vector<int> nums={3,5,6,7};
    vector<vector<int>> ans;
    vector<int> output;
    sequence(nums,0,output,ans);
     vector<vector<int>> ans2;
    for(int i=0;i<ans.size();i++){
        int max=-1,min=100;
    
        for(int j=0;j<ans[i].size();j++){
            if(ans[i].size()==1){
                min=ans[i][j];
                max=min;
                break;
            }
           if(max<ans[i][j]){
            max=ans[i][j];
           }
           if(min>ans[i][j]){
            min=ans[i][j];
           }
        }
        if((min+max)==target){
            ans2.push_back(ans[i]);
        }
        
    }
     for(int i=0;i<ans2.size();i++){
        for(int j=0;j<ans2[i].size();j++){
            cout<<ans2[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}