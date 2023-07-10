class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0;
        if(n==0) return true;
        else if(m==0) return false;
        for(int i = 0;i<m ;i++){
         if(j<n && t[i] == s[j]) j++;
        }
        if(j == n) return true;
        return false;
    }
};