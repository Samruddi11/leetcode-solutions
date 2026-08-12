class Solution {
public:
    int totalFruit(vector<int>& f) {
        int ans=0;
        int i=0;
        unordered_map<int,int>mp;
        for(int j=0;j<f.size();j++){
            mp[f[j]]++;

            while(mp.size()>2){
                mp[f[i]]--;

                if(mp[f[i]]==0){
                    mp.erase(f[i]);
                }
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};