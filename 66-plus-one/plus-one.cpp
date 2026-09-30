class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int crry = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] + 1 <= 9 && i == n - 1) {
                digits[i] += 1 + crry;
                break;
            }
            else if (digits[i] + 1 <= 9){
                digits[i] += crry;
                break;
            }
            else {
                digits[i] = 0;
                crry = 1;
            }
        }
    
        for (int i: digits) {
            if (i != 0) {
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};