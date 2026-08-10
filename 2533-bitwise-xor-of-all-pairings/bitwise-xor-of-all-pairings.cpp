class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xr=0;
        int xr1=0;
        int xr2=0;
        if(nums1.size()%2==0 && nums2.size()%2==0) return 0;
        if(nums1.size()%2!=0 && nums2.size()%2!=0) {
            for(int i=0;i<nums1.size();i++){
                xr1^=nums1[i];
            }
            for(int i=0;i<nums2.size();i++){
                xr2^=nums2[i];
            }
            return xr1^xr2;
            
        }
        if(nums1.size()%2!=0){
            

            for(int i=0;i<nums2.size();i++){
                xr^=nums2[i];

            }
        }
        else{
            for(int i=0;i<nums1.size();i++){
                xr^=nums1[i];
            }
        }
        return xr;
        
    }
};