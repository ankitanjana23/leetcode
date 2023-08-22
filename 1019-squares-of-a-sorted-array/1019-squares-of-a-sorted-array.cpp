class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        while(low<high){
            nums[low] = nums[low] * nums[low];
            nums[high] *= nums[high];
            low ++;
            high--;
        }
        if(low == high) nums[low] = nums[low] * nums[low];
        sort(nums.begin() , nums.end());
        return nums;
    }
};