class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;

        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        vector<int>v;
        unordered_set<int>added;
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end() && added.find(nums2[i])==added.end()){
                v.push_back(nums2[i]);
                added.insert(nums2[i]);
            }
        }

        return v;
        
        
        
    }
};