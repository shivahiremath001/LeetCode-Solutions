class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        arr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i - 1]) arr.push_back(nums[i]);
        }
        for (int i = 0; i < arr.size(); i++){
            nums[i] = arr[i];
        }
        return arr.size();
    }
};


// int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();
//         set<int> numSet;

//         for (int i = n - 1; i >= 0; i--){
//             numSet.insert(nums[i]);
//         }
//         int setSize = numSet.size();
        
//         int i = 0;
//         for (auto it: numSet){
//             if (i == setSize) break;
//             nums[i] = it;
//             i++;
//         }
//         return setSize;