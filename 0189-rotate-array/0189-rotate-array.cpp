class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //This is my one and only approch 
        int n = nums.size();
        if(n ==1 || k ==0) return;
        k = k%n;  //if k is greater than n than we can use
        vector<int> demi ;
        for(int i =0;i<n;i++){
            demi.push_back(nums[i]) ;
        }
        for(int i =0;i<n;i++){
            nums[(i+k) % n] = demi[i];  
        }
    }

};