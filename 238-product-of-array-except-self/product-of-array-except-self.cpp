class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int ZeroCnt = 0;
        for (int i: nums) {
            if (i != 0) product *= i;
            else {
                if (ZeroCnt == 1) {
                    return vector<int>(n, 0);
                }   
                ZeroCnt++;
            }
        }
        if (ZeroCnt) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) nums[i] = product;
                else nums[i] = 0;
            }
            return nums;
        }

        for (int i = 0; i < n; i++) {
            nums[i] = product / nums[i];
        }

        return nums;
    }
};