#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size(); //3
        int m = mat[0].size(); //3
        
        int top=0,bottom=n-1,left=0,right=m-1;
        while(top<bottom&&left<right){
        int prev=mat[top+1][left];
        //left to right for top row
        for(int i=left;i<=right;i++){
            int cur=mat[top][i];
            mat[top][i]=prev;
            prev=cur;
        }
        top++;

        //top to bottom  fir right column
         for(int i=top;i<=bottom;i++){
            int cur=mat[i][right];
            mat[i][right]=prev;
            prev=cur;
        }
        right--;

        //right to left for bottom row
         for(int i=right;i>=left;i--){
            int cur=mat[bottom][i];
            mat[bottom][i]=prev;
            prev=cur;
        }
        bottom--;

        //bottom to top for left column
         for(int i=bottom;i>=top;i--){
            int cur=mat[i][left];
            mat[i][left]=prev;
            prev=cur;
        }
        left++;

        }
        
        
        
      
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat1 = {
        {4,1,2},
        {7,5,3},
        {8,9,6}
    };


  sol.rotate(mat1);

    cout << "Resultant Matrix:\n";
    for (const auto& row : mat1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
