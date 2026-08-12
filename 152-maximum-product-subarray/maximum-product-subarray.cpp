class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curmax=nums[0];
        int curmin=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(curmin,curmax);
            }
            curmax=max(nums[i],nums[i]*curmax);
            curmin=min(nums[i],nums[i]*curmin);
            ans=max(ans,curmax);
        }
        return ans;
        
    }
};