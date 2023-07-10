class Solution {
public:
    bool isHappy(int n) {
        //base case 
        if(n==1|| n==7) return true;
        if(n<10) {
            return false;
        }
        int ans = 0;

        while(n) {
            int remi = n%10;
            ans += remi*remi;
            n= n/10;
        }
       return isHappy(ans);
    }
};