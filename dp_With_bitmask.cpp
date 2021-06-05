// https://leetcode.com/contest/biweekly-contest-53/problems/minimum-xor-sum-of-two-arrays/
class Solution {
public:
    int dp[15][(1<<15)];
    int score(vector<int>& a,vector<int>& b,int i,int mask)
    {
        if(i==a.size())
        {
            return 0;
        }
        if(dp[i][mask]!=-1)
        {
            return dp[i][mask];
        }
        int ele=a[i];
        int ans=INT_MAX;
        for(int j=0;j<b.size();j++)
        {
            if(mask&(1<<j))//ith bit is not set
            {
                int s=ele^b[j];
                ans= min(ans, s+score(a,b,i+1,(mask^(1<<j))));//we set ith bit
            }
        }
        return dp[i][mask]=ans;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        int n=nums1.size();
        return score(nums1,nums2,0,(1<<n)-1);
    }
};
