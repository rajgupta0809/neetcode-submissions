class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int n = s.length();
        unordered_set<char> st;
        int maxi = 0;

        while(j < n){
            if(!st.count(s[j])){
                st.insert(s[j]);
                j++;
                maxi = max(maxi, j-i);
            }else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};