class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string common = strs[0];
        for (int i = 1; i < n; i++) {
            string temp = "";
            for (int j = 0; j < common.size(); j++){
                if (common[j] == strs[i][j]) temp.push_back(strs[i][j]);
                else break;
            }
            if (temp == "") return "";
            common = temp;
        }
        return common;
    }
};