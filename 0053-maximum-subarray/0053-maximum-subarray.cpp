#include <bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       /* My solution */
      int n = nums.size();
      int cnt =0;
      int maxi = INT_MIN;
      if(n==1) {
          return nums[0];
      }
      for(int i =0;i<n;i++){
        //    int new1 =0;
        //    new1 = nums[i]
           cnt +=nums[i];
           maxi = max(cnt,maxi);
           if(cnt<0) cnt =0;
      }
      return maxi;
    }
};