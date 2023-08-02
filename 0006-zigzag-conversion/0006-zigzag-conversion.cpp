class Solution {
public:
    string convert(string s, int r) {
          if(r==1) return s;
        string ans="";
        //Gap in row 1: 2*(r-1)
        int x=2*(r-1), y=0, j;
        for(int i=0; i<r; ++i){
            j=i;
            while(j<s.length()){
                if(x!=0){
                    ans+=s[j];
                    j=j+x;
                }
                if(y!=0 && j<s.length()){
                    ans+=s[j];
                    j=j+y;
                }
            }
            x=x-2; y=y+2;
        }
        return ans;
    }
};