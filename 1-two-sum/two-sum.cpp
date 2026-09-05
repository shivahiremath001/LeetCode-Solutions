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
            int comp = target - nums[i];
            if (numMap.count(comp) && numMap[comp] != i){
                return {i, numMap[comp]};
            }
        }

        return {}; 
    }
};