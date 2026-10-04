class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> arr(n);
        int j = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] != val) {
                arr[j] = nums[i];
                j++;
            }
        }
        for (int i = 0; i < j; i++) {
            nums[i] = arr[i];
        }
        return j;
    }
};


// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int n = nums.size();

//         if (n == 1) {
//             return nums[0] == val? 0: 1;
//         } 
//         int j = n - 1;
//         int k = 0;
//         for (int i = 0; i < n; i++) {
//             if (j <= i ) {
//                 if (n%2 != 0 && nums[i] == val) k++;
//                 break;
//             }
//             while (nums[j] == val) {
//                 k++;
//                 if (j <= i) return n - k;
//                 j--;
//             } 
//             if (nums[i] == val) {
//                 swap(nums[i], nums[j]);
//                 j--;
//                 k++;
//             }
//         }
//         cout << k;
//         return n - k;
//     }
// };