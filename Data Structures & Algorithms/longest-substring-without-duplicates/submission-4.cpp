class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
       unordered_set<char> st;
       int maxCount = 0;
       int i = 0;
       int j = 0;

       while(j < n){
        if(!st.count(s[j])){
            st.insert(s[j]);
            int size = st.size();
            maxCount = max(size, maxCount);
            j++;
        }else{
            st.erase(s[i]);
            i++;
        }
       }
       return maxCount;
    }
};