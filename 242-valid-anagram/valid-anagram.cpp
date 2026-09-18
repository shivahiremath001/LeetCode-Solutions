class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; 
        int arr[256] = {0};
        for (char ch: s){
            arr[ch]++;
        }
        for (char ch: t){
            if (--arr[ch] < 0) return false;
        }
        return true;
    }
};