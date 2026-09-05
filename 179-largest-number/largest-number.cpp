class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [] (int a, int b){
            return (to_string(a) + to_string(b)) > (to_string(b) + to_string(a)) ;
        });

        std::string largestNum = "";
        for (auto it: nums){
            largestNum.append(to_string(it));
        }
    
        if (largestNum[0] == '0') return "0";
        else return largestNum;
    }
};


// class Solution {
// public:
//     static bool comp(int a, int b){
//         int _a = a, _b = b;
//         int x, y;
//         while ( a > 0){
//             x = a % 10;
//             a = a / 10;
//         }
//         while ( b > 0){
//             y = b % 10;
//             b = b / 10;
//         }
//         if ( x == y) return _a > _b? x > y: x < y; 
//         return x > y;
//     }
//     string largestNumber(vector<int>& nums) {
        
//         sort(nums.begin(), nums.end(), Solution::comp);
//         std::string largestNum = "";
//         for (auto it: nums){
//             largestNum.append(to_string(it));
//         }
//         return largestNum;
//     }
// };

// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         vector<int> arr;
//         int i = 0;
//         for (auto it: nums){
//             if (it % 10 == 0){
//                 arr.push_back(it);
//             }
//             else {
//                 while (it != 0){
//                     arr[it % 10];
//                     it = it / 10;
//                 }
//             }
//         }
//         sort(arr.begin(), arr.end());
//         std::string largestNum = "";
//         for (auto it: arr){
//             char temp = (char) it;
//             largestNum.append(temp);
//         }
//         return largestNum;
//     }
// };