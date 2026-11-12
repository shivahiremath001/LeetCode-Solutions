class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lng = 1;
        int tmp = 1;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                tmp++;
                if (lng < tmp) lng = tmp;
            }
            else tmp = 1;
        }
        tmp = 1;
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                tmp++;
                if (lng < tmp) lng = tmp;
            }
            else tmp = 1;
        }

        return lng;
    }
};