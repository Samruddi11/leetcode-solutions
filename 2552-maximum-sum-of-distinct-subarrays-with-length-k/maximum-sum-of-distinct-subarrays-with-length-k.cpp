class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        long long sum=0;
        long long maxsum=0;
        set<int>st;

        while(j<nums.size()){
            while(st.count(nums[j])){
                st.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            st.insert(nums[j]);
            sum+=nums[j];
            
            if(j-i+1==k){
                maxsum=max(sum,maxsum);
                st.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return maxsum;

    }
};