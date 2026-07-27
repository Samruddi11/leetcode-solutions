class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0;
        int n=nums.size();
        int r=n-1;

        while(l<=r){
            if(nums[l]==val){
                nums[l]=nums[r];
                r--;
            }
            else{
                l++;
            }
        }
        return r+1;

    }
};