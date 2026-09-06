class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp;
        int n = s.length();
        mpp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
               {'C', 100}, {'D', 500}, {'M', 1000}};
        int num = 0;
        for (int i = 0; i < n - 1; i++){
            if (mpp[s[i]] < mpp[s[i + 1]]){
                num -= mpp[s[i]];
            } else {
                num += mpp[s[i]];
            }
        }
        num += mpp[s[n-1]];
        return num;
    }
};