vector<vector<int>> dp;
int way(int i,int j,string a,string b)
{
    if(i==a.length())
    {
        if(j==b.length())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int ans=0;
    if(a[i]==b[j])
    {
        ans=ans+way(i+1,j+1,a,b);
    }
    ans=ans+way(i+1,j,a,b);
    return dp[i][j]=ans;
}

int Solution::numDistinct(string a, string b) {
    int n=a.length();
    int m=b.length();
    dp=vector<vector<int>>(n+1,vector<int>(m+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=-1;
        }
    }
   return way(0,0,a,b);
}
