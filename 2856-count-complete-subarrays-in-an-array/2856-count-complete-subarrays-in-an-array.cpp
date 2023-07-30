class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> freq;
        for(int n: nums){
            freq.insert(n);
        }
        int ans =0;
        int dist = freq.size();
        int n = nums.size();
        for(int i =0;i<=n-dist;i++){
            unordered_set<int> temp ;
            for(int j =i;j<n;j++){
                 temp.insert(nums[j]);
                 if(temp.size() == dist) ans++;
            }
        }
        return ans;
        
    }
};