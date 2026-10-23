class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "", s2 = "";

        int skip = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                skip++;
                continue;
            }
            if (skip) {
                skip--;
                continue;
            }
            s1 += s[i];
        }
        skip = 0;
        for (int i = t.size() - 1; i >= 0; i--) {
            if (t[i] == '#') {
                skip++;
                continue;
            }
            if (skip) {
                skip--;
                continue;
            }
            s2 += t[i];
        }

        return s1 == s2;
    }
};