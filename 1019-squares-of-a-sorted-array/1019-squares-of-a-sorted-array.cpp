class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //maximum ko back mai placed 
        vector<int> ans(nums.size());
        int left =0;
        int right = nums.size()-1;
        for(int i =nums.size()-1;i>=0;i--){
            int cp1 = nums[left] * nums[left];
            int cp2 = nums[right] * nums[right];
            if(cp2>cp1){
               ans[i] = cp2;
               right--;
            }
            else {
                ans[i] = cp1;
                left++;
            }
        }
        return ans;
    }
};