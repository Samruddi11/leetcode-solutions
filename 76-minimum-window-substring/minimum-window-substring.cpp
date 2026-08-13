class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        int i=0;
        int count=0;
        unordered_map<char,int>mp;
        for(char c:t){
            mp[c]++;
        }
        int ans = INT_MAX;
        int start = 0;
        for(int j=0;j<s.length();j++){
            if(mp[s[j]]>0){
                count++;
            }
            mp[s[j]]--;   

            while(count==t.length()){
                if(j-i+1<ans){
                    ans=j-i+1;
                    start=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0) count--;
                i++;
                    
            }
        }
        if(ans == INT_MAX)
            return "";
        return s.substr(start, ans);
            
    }

        
    
};