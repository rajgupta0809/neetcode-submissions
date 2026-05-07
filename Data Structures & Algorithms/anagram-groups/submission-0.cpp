class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(), s.end());

            m[s].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto i: m){
            result.push_back(i.second);
        }

        return result;
    }
};
