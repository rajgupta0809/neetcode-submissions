class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        sort(s1.begin(), s1.end());

        for(int i=0;i<=m-n;i++){
            int j = i+n;
            string sub = s2.substr(i, n);

            cout<<sub<<endl;

            sort(sub.begin(), sub.end());

            if(sub == s1) return true;
        }
        return false;
    }
};
