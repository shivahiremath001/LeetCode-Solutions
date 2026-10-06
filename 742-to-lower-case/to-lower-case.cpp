class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++) {
            int tmp = (int) s[i];
            if ( tmp >= 65 && tmp <= 90) {
                s[i] += 32;
            }
        }

        return s;
    }
};