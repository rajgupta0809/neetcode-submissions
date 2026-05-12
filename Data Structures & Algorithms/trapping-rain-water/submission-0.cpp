class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> suffix(n);
        vector<int> prefix(n);
        int result = 0;

        prefix[0] = 0;
        suffix[n-1] = 0;

        //built prefix
        for(int i=1 ;i<n;i++){
            prefix[i] = max(prefix[i-1], height[i-1]);
        }

        //built suffix
        for(int i=n-2 ;i>=0;i--){
            suffix[i] = max(suffix[i+1], height[i+1]);
        }

        for(int i=0;i<n;i++){
            int area = min(prefix[i], suffix[i]) - height[i];
            if(area < 0) continue;
            result = result + area;
        }

        return result;
    }
};
