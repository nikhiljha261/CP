class Solution {
public:
    int n,m;
    int dp[105][105];
    int fun(vector<vector<int>>& matrix,int ind,int r)
    {
        if(r==n)
        {
            return 0;
        }
        
        if(dp[ind][r]!=-1)
        {
            return dp[ind][r];
        }
        int ans=INT_MAX;
        if(ind==104)
        {
            for(int i=0;i<m;i++)
            {
                
                    ans=min(ans,matrix[r][i]+fun(matrix,i,r+1));
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                if(i==ind-1 or i==ind or i==ind+1)
                {
                    ans=min(ans,matrix[r][i]+fun(matrix,i,r+1));
                }
            }
        }
        return dp[ind][r]=ans;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        n=matrix.size();
        m=matrix[0].size();
        return fun(matrix,104,0);
        
    }
};
