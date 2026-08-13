class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0;
        unordered_map<char,int>mp;
        vector<int>ans;
        int count=0;
        for(char c:p){
            mp[c]++;
        }
        for(int j=0;j<s.length();j++){
            if(mp[s[j]]>0){
                count++;
            }
            mp[s[j]]--;

            if(j-i+1>p.length()){
                if(mp[s[i]]>=0){
                    count--;
                }
                mp[s[i]]++;
                i++;
            }
            if(count==p.length()){
                ans.push_back(i);
               
            }
            


            
        }
        return ans;
    }
};