class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; 
        int arr[26] = {0};
        for (char ch: s) arr[ch - 'a']++;
        for (char ch: t) if (--arr[ch - 'a'] < 0) return false;
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();
        vector<bool> arr(n, 1);

        for (int i = 0; i < n; i++){
            if (!arr[i]) continue;
            vector<string> temp;
            for (int j = i; j < n; j++){
                if (isAnagram(strs[i], strs[j]) && arr[j]) {
                    temp.push_back(strs[j]);
                    arr[j] = 0;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};