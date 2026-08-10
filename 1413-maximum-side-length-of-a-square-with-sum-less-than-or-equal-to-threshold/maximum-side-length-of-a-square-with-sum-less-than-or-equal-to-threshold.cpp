class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>> p(m+1, vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                p[i][j]= mat[i-1][j-1]
                + p[i-1][j]
                + p[i][j-1]
                - p[i-1][j-1];
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int len=1 ;len+i<=m && len+j<=n; len++){
                    int r2=i+len;
                    int c2=j+len;

                    int sum=p[r2][c2] - p[i][c2] -p[r2][j] + p[i][j];
                    if(sum<=threshold){
                        ans=max(ans,len);
                    }
                }
            }
        
       
        }
         return ans;
        

    }
};