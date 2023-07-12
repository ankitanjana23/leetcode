class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // for one char s assin one char t like o == r always 
        //if empty space replace ment than approch change 
        int n = s.size();
        int m = t.size();
        if(n!= m) return false;
        unordered_map<char,char>mpp , mpp2;
        for(int i =0;i< n;i++){
            if(mpp.find(s[i]) != mpp.end() ) if(mpp[s[i]] != t[i]) return false;
            if(mpp2.find(t[i]) != mpp2.end() ) if(mpp2[t[i]] != s[i]) return false;

            mpp2[t[i]] = s[i] ;
            mpp[s[i]] = t[i];
        }

        return true;
    }
};