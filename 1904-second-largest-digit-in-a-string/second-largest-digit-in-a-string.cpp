class Solution {
public:
    int secondHighest(string s) {
        int largest = INT_MIN;
        int s_largest = INT_MIN;
        for (char i: s){
            if (isdigit(i)){
                if (largest < i - '0') {
                    s_largest = largest;
                    largest = i - '0';
                }
                else if (s_largest < i - '0' && largest != i - '0'){
                    s_largest = i - '0';
                }
                cout << "l: " << largest << "  |  sl: " << s_largest << endl;
            }
        }

        if (s_largest == INT_MIN) return -1;
        else return s_largest;
    }
};