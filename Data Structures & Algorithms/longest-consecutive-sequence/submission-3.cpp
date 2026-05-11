class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int result = 0;

        for(auto num: nums){
            s.insert(num);
        }

        for(auto num: nums){
            if(!s.count(num-1)){
                int count = 1;
                int find = num+1;
                while(s.count(find)){
                    count++;
                    find = find+1;
                }
                result = max(result, count);
            }
        }
        return result;
    }
};
