class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mpp;
        for (int i: nums) {
            if (!mpp.count(i)) mpp[i] = 1;
            else mpp[i]++;
        }
        vector<pair<int, int>> arr(mpp.size());
        int z = 0;
        for (auto i: mpp) {
            arr[z].first = i.second;
            arr[z].second = i.first;
            z++;
        }
        sort(arr.rbegin(), arr.rend());
        
        vector<int> res(k);
        for (int i = 0; i <= k - 1; i++){
            res[i] = arr[i].second;
        }

        return res;
    }
};