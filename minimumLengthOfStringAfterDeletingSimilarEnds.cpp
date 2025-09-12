#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string str) {
        int p = 0;                  // Left pointer
        int s = str.length() - 1;   // Right pointer

        while (p < s && str[p] == str[s]) {
            char ch = str[p];  // Character to remove from both ends

            // Move left pointer forward while same char repeats
            while (p <= s && str[p] == ch) {
                p++;
            }
            // Move right pointer backward while same char repeats
            while (p <= s && str[s] == ch) {
                s--;
            }
        }

        return s - p + 1;  // Remaining length of string
    }
};

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    Solution sol;
    cout << "Minimum remaining length: " << sol.minimumLength(str) << endl;

    return 0;
}
