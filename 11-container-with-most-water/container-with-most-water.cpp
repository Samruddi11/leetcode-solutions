class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int maxw=0;
        while(i<j){
            int width=j-i;
            int area=min(h[i], h[j])*width;
            maxw=max(area, maxw);
            if(h[i]<h[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxw;
        
    }
};