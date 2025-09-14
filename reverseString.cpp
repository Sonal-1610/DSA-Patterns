#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        // Two-pointer approach
        while (i < j) {
            char temp = s[i];  // Temporary store
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    vector<char> s(n);

    cout << "Enter characters (without spaces): ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    Solution sol;
    sol.reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
