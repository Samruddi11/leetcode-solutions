class Solution {
public:

    int ebs(const vector<int>&nums,int target, bool findfirst){
        int i=0;
        int j=nums.size()-1;
        int index=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                index=mid;
                if(findfirst){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }

            }
            else if(nums[mid]<target) i=mid+1;
            else j=mid-1;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=ebs(nums,target,true);
        int last=ebs(nums,target,false);
        return {first,last};
    }
};