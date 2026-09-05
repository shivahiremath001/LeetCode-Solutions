class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        for (int i = 0; i < n; i++){
            if (numMap.count(target - nums[i]) && numMap[target - nums[i]] != i){
                return {i, numMap[target - nums[i]]};
            }
        }

        return {}; 
    }
};