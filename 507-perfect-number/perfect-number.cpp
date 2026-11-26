class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return 0;
        int sum = 1;
        double sqt = sqrt(num);
        for (int i = 2; i < sqt; i++) {
            if (num % i == 0) {
                sum += i;
                sum += num / i;
            }
        }

        return (sum == num);
    }
};