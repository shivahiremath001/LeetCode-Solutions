class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = t.size();
        char r = t[n - 1];
        for (int i = 0; i < n - 1; i++) {
            r ^= s[i];
            r ^= t[i];
        }
        return r;
    }
};