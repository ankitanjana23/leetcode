class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        mpp['M'] = 1000;
        mpp['D'] = 500;
        mpp['C'] = 100;
        mpp['L'] = 50;
        mpp['X'] = 10;
        mpp['V'] = 5;
        mpp['I'] = 1;

        int n = s.size();
        int cnt =0;
        int i ;
        for(i =0;i<n-1;i++){
            if(mpp[s[i]] < mpp[s[i+1]] ){
                cnt -= mpp[s[i]];
            }
            else {
              cnt += mpp[s[i]];
            }
        }
        cnt += mpp[s[i]];
       return cnt;
    }
};