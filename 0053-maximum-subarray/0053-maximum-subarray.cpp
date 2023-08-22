#include <bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       /* My solution */
       int sum = 0;
       int maxi = nums[0];
       for(int i =0;i<nums.size();i++){
           sum += nums[i];
           maxi = max(sum , maxi);
           sum = max(sum,0);
          
       }
       return maxi ;
    }
};