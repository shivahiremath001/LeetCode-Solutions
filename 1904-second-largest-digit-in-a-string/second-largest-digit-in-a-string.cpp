class Solution {
public:
    int secondHighest(string s) {
        int largest = INT_MIN;
        int s_largest = INT_MIN;
        for (char i: s){
            if (isdigit(i)){
                int n = i - '0';
                if (largest < n) {
                    s_largest = largest;
                    largest = n;
                }
                else if (s_largest < n && largest != n){
                    s_largest = n;
                }
            }
        }

        if (s_largest == INT_MIN) return -1;
        else return s_largest;
    }
};