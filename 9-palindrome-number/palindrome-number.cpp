class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long rev = 0;

        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        return original == rev;
    }
};