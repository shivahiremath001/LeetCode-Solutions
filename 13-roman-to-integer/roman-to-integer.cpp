class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp;
        mpp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
               {'C', 100}, {'D', 500}, {'M', 1000}};
        int num = 0;
        for (int i = 0; i < s.length(); i++){
            num += mpp[s[i]];
            if (i > 0 && mpp[s[i]] > mpp[s[i - 1]]){
                num -= 2 * mpp[s[i - 1]];
            }
        }
        return num;
    }
};