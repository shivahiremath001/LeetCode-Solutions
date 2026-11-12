class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lng = 1;
        int tmp1 = 1;
        int tmp2 = 1;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                tmp1++;
                if (lng < tmp1) lng = tmp1;
            }
            else tmp1 = 1;

            if (nums[i] < nums[i + 1]) {
                tmp2++;
                if (lng < tmp2) lng = tmp2;
            }
            else tmp2 = 1;
        }

        return lng;
    }
};