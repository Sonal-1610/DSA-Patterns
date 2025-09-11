#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int i = 0;
        int j = s.length() - 1;

        // Step 1: Move all '1's towards the left using two pointers
        while (i < j) {
            if (s[i] == '1') {
                i++;
            } else if (s[j] == '0') {
                j--;
            } else {
                // s[i] = '0' and s[j] = '1' => swap
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        // Step 2: Move the last '1' to the end (to make number odd)
        int lastOneIndex = -1;
        for (int k = s.length() - 1; k >= 0; k--) {
            if (s[k] == '1') {
                lastOneIndex = k;
                break;
            }
        }

        if (lastOneIndex != -1 && lastOneIndex != s.length() - 1) {
            swap(s[lastOneIndex], s[s.length() - 1]);
        }

        return s;
    }
};

int main() {
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    Solution obj;
    string result = obj.maximumOddBinaryNumber(s);

    cout << "Maximum odd binary number: " << result << endl;

    return 0;
}
