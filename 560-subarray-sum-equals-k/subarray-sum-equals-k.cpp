class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cursum=0;
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            if(mp.find(cursum-k)!=mp.end()){
                count+=mp[cursum-k];
            }
            mp[cursum]++;
        }
        return count;
    }
};