class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int ans=0;
        unordered_set<char>set;
        for(int j=0;j<s.length();j++){
            while(set.find(s[j])!=set.end()){
                set.erase(s[i]);
                i++;


            }
            set.insert(s[j]);

            int winsize=j-i+1;
            ans=max(ans,winsize);        
        }
        return ans;

        
    }
};