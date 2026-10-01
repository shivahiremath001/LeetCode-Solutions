class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gsize = g.size();
        int ssize = s.size();

        if (gsize == 0 || ssize == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int cnt = 0;
        int j = 0;
        for (int i = 0; i < gsize && j < ssize; ) {
            if (g[i] <= s[j]) {
                cnt++;
                i++;
            }
            j++;
            
        }
        return cnt;
    }
};