class Solution {
public:
    string addBinary(string a, string b) {
        int a_ = a.size() - 1;
        int b_ = b.size() - 1;
        int crry = 0;

        string res = "";
        
        while (a_ >= 0 && b_ >= 0) {
            int tmp = (a[a_] - '0') + (b[b_] - '0') + crry;
            
            if (crry) crry = 0;
            if (tmp == 3) {
                res.insert(res.begin(), '1');
                crry = 1;
            }
            else if (tmp == 2) {
                res.insert(res.begin(), '0');
                crry = 1;
            }
            else if (tmp == 1) {
                res.insert(res.begin(), '1');
            }
            else res.insert(res.begin(), '0');
            a_--;
            b_--;
        }

        while (a_ >= 0) {
            int tmp = (a[a_] - '0') + crry;
            if (tmp == 2) {
                res.insert(res.begin(), '0');
                crry = 1;
            }
            else if (tmp == 1) {
                res.insert(res.begin(), '1');
                crry = 0;
            }
            else {
                res.insert(res.begin(), '0');
                crry = 0;
            }
            a_--;
        }

        while (b_ >= 0) {
            int tmp = (b[b_] - '0') + crry;
            if (tmp == 2) {
                res.insert(res.begin(), '0');
                crry = 1;
            }
            else if (tmp == 1) {
                res.insert(res.begin(), '1');
                crry = 0;
            }
            else {
                res.insert(res.begin(), '0');
                crry = 0;
            }
            b_--;
        }

        if (crry) res.insert(res.begin(), '1'); 
    
        return res;
    }
};