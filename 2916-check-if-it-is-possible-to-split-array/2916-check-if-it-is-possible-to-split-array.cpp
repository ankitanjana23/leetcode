class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        if(n<=2) return true;
        for(int i =0;i<n-1;i++){
            int val = nums[i] + nums[i+1];
            if(val >=m) return true;
        }
        return false;
    }
};