#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        int n = mat1.size();
        int m = mat2[0].size();
        int p = mat2.size();

        vector<vector<int>> mul(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < p; k++) {
                    mul[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        return mul;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat1 = {
        {1, 2},
        {3, 4}
    };

    vector<vector<int>> mat2 = {
        {5, 6},
        {7, 8}
    };

    vector<vector<int>> result = sol.multiply(mat1, mat2);

    cout << "Resultant Matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
