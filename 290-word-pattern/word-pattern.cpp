class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        stringstream ss(s);
        string word;
        for(int i=0;i<p.size();i++){
            if(!(ss>>word)) return false;
            char a=p[i];
            if(mp1.find(a)!=mp1.end()){
                if(mp1[a]!=word) {
                    return false;
                }
            }
            if(mp2.find(word)!=mp2.end()){
                if(mp2[word]!=a) {
                    return false;
                }
            }

            mp1[a]=word;
            mp2[word]=a;
            
            
        }
        if(ss>>word) return false;
        return true;

        
    }
};