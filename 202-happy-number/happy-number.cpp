class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1){
            if(s.find(n)!=s.end()){
                return false;
            }
            s.insert(n);
            int temp=n;
            int sum=0;
            while(temp!=0){
                int digit=temp%10;
                sum+=digit*digit;
                temp=temp/10;
            }
            n=sum;
        }
        return true;

        
    }
};