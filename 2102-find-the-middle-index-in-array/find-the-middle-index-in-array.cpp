class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         vector<int>p(nums.size());
        vector<int>s(nums.size());
        p[0]=nums[0];
        s[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            p[i]=p[i-1]+nums[i];

        }
        for(int i=nums.size()-2;i>0;i--){
            s[i]=s[i+1]+nums[i];

        }
        for(int i=0;i<nums.size();i++){
            int left= (i==0) ? 0: p[i-1];
            int right= (i==nums.size()-1) ? 0: s[i+1];

            if(left==right) return i;
           
        }
        return -1;
    }
};