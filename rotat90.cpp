#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> rotate90(vector<vector<int>>& mat) {
        int n = mat.size(); //3
        int m = mat[0].size(); //3
        vector<vector<int>> ans(m, vector<int>(n));
        //transpose
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                  ans[j][i]=mat[i][j];
            }
        }
        //reverse rows

        for(int i=0;i<m;i++){
            int j=0;
            int k=n-1;
            while(j<k){
                swap(ans[i][j],ans[i][k]);
                j++;
                k--;
            }
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


  vector<vector<int>> mat1=sol.rotate90(mat);

    cout << "Resultant Matrix:\n";
    for (const auto& row : mat1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
