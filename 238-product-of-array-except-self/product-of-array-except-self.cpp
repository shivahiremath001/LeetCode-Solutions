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
                    vector<int> res(n, 0);
                    return res;
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
            if (nums[i]) nums[i] = product / nums[i];
        }

        return nums;
    }
};