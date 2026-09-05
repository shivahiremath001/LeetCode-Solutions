class Solution{
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Check if the array is non-decreasing
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;
        
        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
    }
};



// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int size = nums.size();
//         int small = INT_MAX;
//         for (int i = 0; i < size; i++){
//             if (small > nums[i]) small = nums[i];
//         }
//         auto it = find(nums.begin(), nums.end(), small);
//         int index = distance(nums.begin(), it);
        
//         int flag1 = 1, flag2 = 1;
//         for (int i = 0; i < index - 1; i++){
//             if (nums[i] < nums[i+1]) flag1 = 0;
//         }
//         for (int i = index; i < size - 1; i++){
//             if (nums[i] < nums[i+1]) flag1 = 0;
//         }

//         for (int i = 0; i < index - 1; i++){
//             if (nums[i] > nums[i+1]) flag2 = 0;
//         }
//         for (int i = index; i < size - 1; i++){
//             if (nums[i] > nums[i+1]) flag2 = 0;
//         }

//         if (flag1 || flag2) return 1;
//         else return 0;
//     }
// };