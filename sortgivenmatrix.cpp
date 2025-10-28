#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void sort(vector<vector<int>>& mat) {
        int n = mat.size(); //3
        int m = mat[0].size(); //3
        
        for(int i=0;i<m*n-1;i++){
            int row1=i/n;
            int col1=i%n;
            for (int j = i+1; j < m*n; j++)
            {
                int row2=j/n;
            int col2=j%n;
            if(mat[row1][col1]>mat[row2][col2]){
                swap(mat[row1][col1],mat[row2][col2]);
            }
            }
            
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


  sol.sort(mat1);

    cout << "Resultant Matrix:\n";
    for (const auto& row : mat1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
