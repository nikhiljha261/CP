int dp[505][2][505];
int fun(int ind,int buy,int sell,int b,vector<int> a)
{
    if(ind==a.size())
    {
        return 0;
    }
    if(dp[ind][buy][b]!=-1)
    {
        return dp[ind][buy][b];
    }
    int ans=0;
    if(buy==1 and b>0)
    {
        int op1=-a[ind]+fun(ind+1,0,1,b,a);
        int op2=fun(ind+1,1,0,b,a);
        ans=max({op1,op2,ans});
    }
    if(sell==1)
    {
        int op2=a[ind]+fun(ind+1,1,0,b-1,a);
        int op1=fun(ind+1,0,1,b,a);
        ans=max({op1,op2,ans});
    }
    return dp[ind][buy][b]=ans;


}
int Solution::solve(vector<int> &a, int b) {
    memset(dp,-1,sizeof(dp));
    return fun(0,1,0,b,a);
}
