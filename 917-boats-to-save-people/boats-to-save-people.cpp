class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(), p.end());
        int i=0;
        int j=p.size()-1;
        int b=0;
        while(i<=j){
            if(p[i]+p[j]<=limit){
                i++;
            }
            j--;
            b++;
        }
        return b;
        
    }
};