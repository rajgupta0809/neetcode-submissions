class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxHeight = 0;
        int start = 0;
        int end = n-1;

        while(start < end){
            int height = min(heights[start], heights[end]) * (end-start);
            maxHeight = max(height, maxHeight);

            if(heights[start] > heights[end]){
                end--;
            }else {
                start++;
            }
        }
        return maxHeight;
    }
};
