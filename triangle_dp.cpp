class Solution {
public:
    int r;
    int dp[205][205];
    int fun(int t,int ind,vector<vector<int>>& triangle)
    {
        if(ind==r)
        {
            return 0;
        }
        if(dp[ind][t]!=-1) return dp[ind][t];
        int ans=INT_MAX;
        int c=triangle[ind].size();
        for(int i=0;i<c;i++)
        {
            if(i==t || i==t+1)
            {
                ans=min(ans,triangle[ind][i]+fun(i,ind+1,triangle));
            }
        }
        return dp[ind][t]=ans;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        r=triangle.size();
        return fun(0,0,triangle);
        
    }
};
