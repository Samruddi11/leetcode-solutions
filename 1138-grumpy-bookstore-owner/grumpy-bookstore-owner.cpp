class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int base=0;
        for(int i=0;i<g.size();i++){
            if(g[i]==0){
                base+=c[i];
            }
        }
       
        
        int maxsum=0;
        int sum=0;
        for(int i=0;i<g.size();i++){
            if(g[i]==1){
                sum+=c[i];
            }
            if(i>=m && g[i-m]==1){
                sum-=c[i-m];
            }
            maxsum=max(sum,maxsum);
        }
        return base+maxsum;
    }
};