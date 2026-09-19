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

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> mp;
//         for (string s : strs) {
//             mp[strSort(s)].push_back(s);
//         }
//         vector<vector<string>> anagrams;
//         for (auto p : mp) { 
//             anagrams.push_back(p.second);
//         }
//         return anagrams;
//     }
// private:
//     string strSort(string s) {
//         int counter[26] = {0};
//         for (char c : s) {
//             counter[c - 'a']++;
//         }
//         string t;
//         for (int c = 0; c < 26; c++) {
//             t += string(counter[c], c + 'a');
//         }
//         return t;
//     }
// };


// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> mp;
//         for (string s : strs) {
//             string t = s; 
//             sort(t.begin(), t.end());
//             mp[t].push_back(s);
//         }
//         vector<vector<string>> anagrams;
//         for (auto p : mp) { 
//             anagrams.push_back(p.second);
//         }
//         return anagrams;
//     }
// };




