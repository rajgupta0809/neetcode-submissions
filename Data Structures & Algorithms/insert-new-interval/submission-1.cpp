class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);

        vector<vector<int>> result;
        if(intervals.size() == 0) return result;
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        int n = intervals.size();

        for(int i=1 ; i<n; i++){
            if(result.back()[1] >= intervals[i][0]){
                vector<int> temp;
                temp.push_back(result.back()[0]);
                temp.push_back(max(result.back()[1], intervals[i][1]));
                result.pop_back();
                result.push_back(temp);
            }else{
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};
