class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int n = height.size();
        int i = 0, j = n - 1;
        while (i < j){
            n--;
            if (height[i] < height[j]){
                if (area < height[i] * n) area = height[i] * n;
                i++;
            }
            else {
                if (area < height[j] * n) area = height[j] * n;
                j--;
            }
        }
        return area;
    }
};