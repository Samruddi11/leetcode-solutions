class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int totsum=0;
        for(int i=0;i<c.size();i++){
            totsum+=c[i];
        }
        
        int n=c.size();
        int winsize=n-k;
        if(winsize==0) return totsum;
        int sum=0;
        for(int i=0;i<winsize;i++){
            sum+=c[i];
        }
        int minsum=sum;
        for(int i = winsize; i < n; i++) {

            sum += c[i];                  // add new element
            sum -= c[i - winsize];     // remove old element

            minsum = min(minsum, sum);
        }
        return totsum-minsum;

        
        
    }
};