class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int sum = INT_MIN;
        int pre =1 , suff =1;
        for(int i =0;i<n;i++){
            pre *= nums[i];
            suff *= nums[n-i-1];
            sum = max(sum , max(pre,suff));
            if(pre == 0) pre = 1;
            if(suff == 0) suff =1;
        }
        return sum ;
    }
};