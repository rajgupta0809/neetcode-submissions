class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        unordered_map<int,int> m;
        int i=0,j=0;
        int count = 0;
        int ans = 0;

        for(auto i: s1){
            m[i]++;
        }
        count = m.size();

        while(j < n){
            if(m.count(s2[j])){
                    m[s2[j]]--;
                    if(m[s2[j]] == 0){
                        count--;
                    }
            }

            if(j-i+1 == k){
                if(count == 0) return true;
                if(m.count(s2[i])){
                    if(m[s2[i]] == 0) count++;
                    m[s2[i]]++;
                }
                i++;
            }
            j++;
        }
        return false;
    }
};
