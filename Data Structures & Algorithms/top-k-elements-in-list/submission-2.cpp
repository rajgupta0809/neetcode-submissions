class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> result;
        vector<vector<int>> frequency(nums.size()+1);
        int n = nums.size();
        for(auto i: nums){
            m[i]++;
        }

        for(auto i: m){
            frequency[i.second].push_back(i.first);
        }

        for(int i=n; i>0;i--){
            if(result.size() == k){
                break;
            }
            for(auto i: frequency[i]){
                result.push_back(i);
            }
        }

        return result;
    }
};
