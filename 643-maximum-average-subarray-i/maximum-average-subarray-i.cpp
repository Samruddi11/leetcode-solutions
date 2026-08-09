class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k;
        int sum=0;
        for(int x=i;x<j;x++){
            sum+=nums[x];
        }
        double maxavg= (double)sum/k;

        while(j<nums.size()){
            sum=sum-nums[i]+nums[j];
            i++;
            j++;

            double avg= (double)sum/k;

            maxavg= max(maxavg,avg);


            
        }

        return maxavg;
    }
};