class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n) {
            int max = INT_MIN;
            for (int i: nums) {
                if (max < i) max = i;
            }
            return max;
        } 

        int subArr = n - k + 1;
        map<int, int> mpp;

        for (int i = 0; i < subArr; i++) {
            for (int j = i; j < i + k; j++) {
                mpp[nums[j]]++;
            }
        }
        if (k == 1) {
            int max = INT_MIN;
            for (auto i: mpp) {
                if (i.second == 1 && i.first > max)
                    max = i.first;
            }
            if (max == INT_MIN) return -1;
            return max;
        }
        for (auto i: mpp) cout << i.first << ":" << i.second << endl;
        cout << nums[0] << "&" << nums[n-1];
        if (mpp[nums[0]] == mpp[nums[n-1]] && mpp[nums[0]] == 1){
            cout << "hi";
            return nums[0] > nums[n-1]? nums[0]: nums[n-1];
        }
        else if (mpp[nums[0]] > 1 && mpp[nums[n-1]] > 1) return -1;
        else if (mpp[nums[0]] > 1) return nums[n-1];
        else if (mpp[nums[n-1]] > 1) return nums[0];
        else 
            return -1;
    }
};

// passed solution with shitty time complexity 
// class Solution {
// public:
//     int largestInteger(vector<int>& nums, int k) {
//         int n = nums.size();
//         if (k == n) {
//             int max = INT_MIN;
//             for (int i: nums) {
//                 if (max < i) max = i;
//             }
//             return max;
//         } 

//         int subArr = n - k + 1;
//         map<int, int> mpp;

//         for (int i = 0; i < subArr; i++) {
//             for (int j = i; j < i + k; j++) {
//                 mpp[nums[j]]++;
//             }
//         }
//         if (k == 1) {
//             int max = INT_MIN;
//             for (auto i: mpp) {
//                 if (i.second == 1 && i.first > max)
//                     max = i.first;
//             }
//             if (max == INT_MIN) return -1;
//             return max;
//         }

//         int min = INT_MAX;

//         for (auto i: mpp) {
//             if (min > i.second) min = i.second;
//         }
//         if (min != 1) return -1;
//         int ans = INT_MIN;
//         for (auto i: mpp) {
//             if (min == i.second && ans < i.first) ans = i.first;
//         }
//         return ans;
//     }
// };












// class Solution {
// public:
//     int largestInteger(vector<int>& nums, int k) {
//         int n = nums.size();
//         int subArr = n - k + 1;
//         map<int, int> mpp;

//         for (int i = 0; i < subArr; i++) {
//             for (int j = i; j < i + k; j++) {
//                 mpp[nums[j]]++;
//             }
//         }
//         for (auto i: mpp) cout << i.first << ":" << i.second << endl;

//         return -1;
//     }
// };