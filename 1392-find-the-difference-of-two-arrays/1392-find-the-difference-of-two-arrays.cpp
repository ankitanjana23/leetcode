class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_map<int ,int> mpp1;
        unordered_map<int ,int> mpp2;
        for(auto & s: nums1){
             mpp1[s]++;
        }
        for(auto & s: nums2){
             mpp2[s]++;
        }

        for(int i =0;i<nums1.size();i++){
            int num = nums1[i];
            if(mpp2.find(num) == mpp2.end())  //not find out 
            {
            ans[0].push_back(num);
            //element push krne ke baad 
            mpp2[num]++;   //ele . insert 

            }
        }

        for(int i =0;i<nums2.size();i++){
            int num = nums2[i];
            if(!mpp1.count(num))  //not find out 
            {
            ans[1].push_back(num);
            mpp1[num]++;
            }
        }
        return ans;
    }
};