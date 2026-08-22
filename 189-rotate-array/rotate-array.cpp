class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        k=k%nums.size();
        int i=0, j=k-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=k,j=nums.size()-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        
    }
};