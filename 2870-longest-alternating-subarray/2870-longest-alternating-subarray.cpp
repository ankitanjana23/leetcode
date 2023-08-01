class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
    int res = 1, cnt = 1;
    for(int i = 1;i < size(nums); ++i) {
        int prev = cnt & 1 ? -1 : 1;
        if(prev == nums[i - 1] - nums[i]) 
		    ++cnt;
        else 
		    cnt = nums[i - 1] - nums[i] == -1 ? 2 : 1;
        res = max(res, cnt);
    }
    return res == 1 ? -1 : res;
    }
};