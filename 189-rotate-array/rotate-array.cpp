
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        unsigned int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end() - k);
        reverse(begin(nums) + (n - k), end(nums));
        reverse(nums.begin(), nums.end());
        // for ( auto it: nums) cout << it << " ";
        //for (int i = n -1; i >= 0; i--) cout << nums[i] << " ";
    }
};