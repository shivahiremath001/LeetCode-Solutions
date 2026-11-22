class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (int i: arr) mpp[i]++;

        int great = 0;
        int val = 0;
        for (auto i: mpp) {
            if (great < i.second) {
                great = i.second;
                val = i.first;
            }
        }
        return val;

    }

};