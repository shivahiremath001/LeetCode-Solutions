
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0) return 0;
        if (n == pow(2, 31)) return 1;
        n = abs(n);

        if (n < 1000) {
            for (int i = 0; i < 10; i++) {
                if (pow(2, i) == n) return 1;
            }
        }
        else if (n < 1000000) {
            for (int i = 10; i < 20; i++) {
                if (pow(2, i) == n) return 1;
            }
        }
        else {
            for (int i = 20; i <= 30; i++) {
                if (pow(2, i) == n) return 1;
            }
        }
        return 0;


    }
};