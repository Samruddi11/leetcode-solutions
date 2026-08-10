class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum(nums.size());
        int runsum=0;
        for(int i=0;i<nums.size();i++){
            runsum+=nums[i];
            sum[i]=runsum;
        }
        return sum;

    }
};