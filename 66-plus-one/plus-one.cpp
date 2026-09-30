class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int crry = 0;
        bool flag = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] + 1 <= 9 && i == n - 1) {
                digits[i] += 1 + crry;
                return digits;
            }
            else if (digits[i] + 1 <= 9){
                digits[i] += crry;
                return digits;
            }
            else {
                digits[i] = 0;
                crry = 1;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};