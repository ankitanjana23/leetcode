class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "" ;
        int n = columnNumber;
        while(n>0) {
            res = char('A' + (n-1)%26) + res;
            n = (n-1)/26;
        }
        return res;
    }
};