class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int cursum=0;
        int maxsum=0;
        int minsum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            maxsum=max(cursum,maxsum);
            minsum=min(cursum,minsum);
            ans=maxsum-minsum;
        }
        return ans;
        
    }
};