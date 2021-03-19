class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1];//min jump to reach nth index
        for(int i=0;i<=n;i++)
        {
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=0;i<n;i++)
        {
            int jump=nums[i];
            for(int j=1;j<=min(n-i,jump);j++)
            {
                dp[i+j]=min(dp[i+j],dp[i]+1);
            }
            
        }
        return dp[n-1];
        
    }
};
