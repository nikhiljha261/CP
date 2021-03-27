class Solution {
public:
//     https://leetcode.com/problems/longest-increasing-subsequence/submissions/
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans;
        
    }
};
