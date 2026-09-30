class Solution {
public:
    char findTheDifference(string s, string t) {
        char r = t[t.size() - 1];
        for (int i = 0; i < t.size() - 1; i++) {
            r ^= s[i];
            r ^= t[i];
        }
        return r;
    }
};