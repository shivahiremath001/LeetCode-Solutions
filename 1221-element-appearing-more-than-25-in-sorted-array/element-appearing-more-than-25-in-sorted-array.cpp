class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int cnt = 0;
        int maxcnt = 0;
        int val = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i - 1] != arr[i]) cnt = 0;
            cnt++;
            if (cnt > maxcnt) {
                    maxcnt = cnt;
                    val = arr[i - 1];
            }
        }
        return val;
    }

};