class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        bool minues = false;
        if(x<0){
            minues = true;
            -static_cast<long long>(x);
        }
        while(x!=0) {
            int remi = x%10;
            x= x/10;
            ans = ans*10 + remi;
        }
         if (ans > INT_MAX || ans < INT_MIN) {
            return 0; 
        }
        return ans;
    }
};