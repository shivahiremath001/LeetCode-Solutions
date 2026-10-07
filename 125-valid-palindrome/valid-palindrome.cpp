class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                s[j] = s[i];
                j++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[j] = s[i] + 32;
                j++;
            }
        }
        j--;
        
        for (int i = 0; i < j; i++) {
            if (s[i] != s[j]) return 0;
            j--;
        }

        return 1;
    }
};