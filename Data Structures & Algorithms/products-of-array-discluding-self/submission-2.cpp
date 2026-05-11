class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        left[0] = nums[0];

        vector<int> right(n);
        right[n-1] = nums[n-1];
        int curr = 1;

        for(int i=1;i<n;i++){ //prepare left
            left[i] = nums[i] * left[i-1];
        }

        for(int i=n-2;i>=0;i--){
            right[i] = nums[i] * right[i+1];
        }

        vector<int> result(n);
        result[0] = right[1];
        result[n-1] = left[n-2];

        for(int i=1;i<n-1;i++){
            result[i] = left[i-1] * right[i+1];
        }

        return result;
    }
};
