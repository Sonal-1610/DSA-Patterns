#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0; // pointer for s
        int j = 0; // pointer for t
        int matched = 0; // count of matched characters

        // Two-pointer traversal
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                matched++; // found a matching character
                j++;       // move pointer in t
            }
            i++; // always move pointer in s
        }

        // Remaining characters in t need to be appended
        return t.size() - matched;
    }
};

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    Solution sol;
    cout << "Characters to append: " << sol.appendCharacters(s, t) << endl;

    return 0;
}
