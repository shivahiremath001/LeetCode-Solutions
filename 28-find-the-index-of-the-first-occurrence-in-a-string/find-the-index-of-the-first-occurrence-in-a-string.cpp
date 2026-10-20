class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();

        for (int i = 0; i < h - n + 1; i++) {
            if (haystack[i] == needle[0]) {
                int j = 0;
                int k = i;
                while (j < n) {
                    if (haystack[k] != needle[j]) break;
                    j++;
                    k++;
                }
                if (j == n) return i;
            }
        }

        return -1;
    }
};