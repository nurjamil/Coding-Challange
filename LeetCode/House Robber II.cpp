class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        vector<int> dp(len+1,0);
        if(len==1) return nums[0];
        if(len<3) return max(nums[0],nums[1]);
        if(len == 3) return max(max(nums[0],nums[1]),nums[2]);
        nums.push_back(0);
        dp[0] = nums[0],dp[1] = nums[1],dp[2] = nums[2];
        int result = 0;
        dp[1] = 0;
        for(int i=0;i<(len-2);i++){
            dp[i+2] = max(dp[i]+nums[i+2],dp[i+2]);
            dp[i+3] = max(dp[i]+nums[i+3],dp[i+3]);
        }
        vector<int> dp2(len+1,0);
        dp2[1] = nums[1];
        dp[len-1] -= dp[0];
        result = max(dp[len-1],max(dp[len-2],dp[len-3]));
        for(int i=1;i<(len-2);i++){
            dp2[i+2] = max(dp2[i]+nums[i+2],dp2[i+2]);
            dp2[i+3] = max(dp2[i]+nums[i+3],dp2[i+3]);
        }
        result = max(max(dp2[len-1],result),max(dp2[len-2],dp2[len-3]));
        return result;
        
    }
};