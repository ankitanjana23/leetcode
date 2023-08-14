class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        partial_sort(nums.begin() , nums.begin() + nums.size()-k+1 ,nums.end() );
        return nums[nums.size()-k];
    }
};