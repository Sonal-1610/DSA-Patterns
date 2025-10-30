#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> max(vector<vector<int>>& mat) {
        int n = mat.size(); //3
        int m = mat[0].size(); //3
      vector<int> ans;

        for(int i=0;i<n;i++){
            int Max=INT_MIN;
            
           for(int j=0;j<m;j++){
               ;
                if(Max<mat[i][j]){
                    Max=mat[i][j];
                   
                }
           }
         
           ans.push_back(Max);
        }
        
      return ans;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat = {
        {4,1,2},
        {7,5,3},
        {8,9,6}
    };


  vector<int> ans=sol.max(mat);

    
     for(int i=0;i<mat.size();i++){
        cout<<ans[i]<<" ";
     }
    return 0;
}
