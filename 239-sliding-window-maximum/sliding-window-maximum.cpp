class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        //1st window elements into the queue
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<nums.size();i++){
            ans.push_back(nums[dq.front()]);
            //Remove elements which are not of current window
            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }
            //remove smaller value
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};