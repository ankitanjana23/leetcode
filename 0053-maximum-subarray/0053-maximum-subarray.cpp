
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       // Divide and Conquer method to solve this 
       int cmax = 0;
       int omax = INT_MIN;
       for(int i =0;i<nums.size() ;i++){
           if(cmax<0) {
               cmax = nums[i] ;
           }
           else {
               cmax += nums[i];
           }
           omax = max(omax, cmax);
       }
       return omax;
    }
};