class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int count = 1;
            int current = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == current + 1){
                    count++;
                    current = nums[j];
                }
            }
            result = max(result, count);
        }
        return result;
    }
};
