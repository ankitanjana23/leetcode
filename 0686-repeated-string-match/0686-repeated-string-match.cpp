class Solution {
public:
    int repeatedStringMatch(string a, string b) { 
        int m = b.size();
        int cnt  = 0;
        string repeat = "";
        int n = repeat.size();
        while(n<m){
            repeat += a;
            n = repeat.size();
            cnt += 1;
        } 
        a = repeat;
        int found = a.find(b);
        if(found != string::npos) return cnt;

        //one time extra double 
        a+= a;
        cnt += 1;
        found = a.find(b);
        if(found != string::npos) return cnt;

        return -1;
    }

};