class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i: nums){
            s.insert(i);
        }
        
        int ans=0;
        for(int i:s){
            if(s.find(i-1)==s.end()){
            int count=1;
            int curr=i;

            while(s.find(curr+1)!=s.end()){
                count++;
                curr++;
            }
            ans=max(ans,count);

        }
        }
        return ans;
        
    }
};