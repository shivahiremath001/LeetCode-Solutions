class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> numSet;

        for (int i = n - 1; i >= 0; i--){
            numSet.insert(nums[i]);
        }
        int setSize = numSet.size();
        
        int i = 0;
        for (auto it: numSet){
            if (i == setSize) break;
            nums[i] = it;
            i++;
        }
        return setSize;
    }
};