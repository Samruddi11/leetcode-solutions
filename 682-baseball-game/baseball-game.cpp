class Solution {
public:
    int calPoints(vector<string>& op) {
        
        vector<int>record;
        for(string s: op){
            if(s=="C"){
                record.pop_back();
            }
            else if(s=="D"){
                record.push_back(2*record.back());
            }
            else if(s=="+"){
                int n=record.size();
                record.push_back(record[n-1]+record[n-2]);
            }
            else{
                record.push_back(stoi(s));
            }
        }
        int sum=0;
        for(int x:record){
            sum+=x;
        }
        return sum;
    }
};