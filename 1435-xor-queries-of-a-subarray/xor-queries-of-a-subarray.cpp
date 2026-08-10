class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>p(arr.size());
        p[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            p[i]=p[i-1]^arr[i];
        }



        vector<int>xr;
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(left==0) xr.push_back(p[right]);
            else xr.push_back(p[right]^p[left-1]);
            
        }
        return xr;
    }
};