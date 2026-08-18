class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;

        vector<string>rows(numRows);
        int currow=0;
        bool goingdown=false;

        for(char c:s){
            rows[currow]+=c;

            if(currow==0 || currow==numRows-1){
                goingdown =!goingdown;
            }
            currow+=goingdown? 1:-1;

        }

        string res="";
        for(string row:rows){
            res+=row;
        }
        return res;
    }
};