class Solution {
public:
    bool isPalindrome(string s) {
        string cl="";
        for (char c: s){
            if(isalnum(c)){
                cl+=tolower(c);
            }
        }
        int i=0;
        int j=cl.length()-1;
        while(i<j){
            if(cl[i]!=cl[j]) return false;
            i++;
            j--;
        }
        
        return true;


    
        
        
    }
};