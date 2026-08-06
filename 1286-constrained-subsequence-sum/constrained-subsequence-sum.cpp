class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {

        int n = nums.size();

        vector<int> dp(n);
        deque<int> dq;

        int ans = nums[0];

        for(int i = 0; i < n; i++) {

            // Remove indices outside the window
            while(!dq.empty() && dq.front() < i - k)
                dq.pop_front();

            // Start a new subsequence
            dp[i] = nums[i];

            // Extend the best previous subsequence
            if(!dq.empty())
                dp[i] = max(dp[i], nums[i] + dp[dq.front()]);

            ans = max(ans, dp[i]);

            // Remove smaller dp values from the back
            while(!dq.empty() && dp[dq.back()] <= dp[i])
                dq.pop_back();

            // Only positive dp values are useful
            if(dp[i] > 0)
                dq.push_back(i);
        }

        return ans;
    }
};