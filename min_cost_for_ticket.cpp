class Solution {
public:
    int n;
    int dp[505][505];
    int fun(int ind,int free,vector<int> day,vector<int> cost)
    {
        if(ind==n)
        {
            return 0;
        }
        if(dp[ind][free]!=-1)
        {
            return dp[ind][free];
        }
        int ans=INT_MAX;
        int x=day[ind];
        if(x<=free)
        {
            ans=fun(ind+1,free,day,cost);
        }
        else
        {
            int op1=cost[0]+fun(ind+1,x,day,cost);
            int op2=cost[1]+fun(ind+1,x+6,day,cost);
            int op3=cost[2]+fun(ind+1,x+29,day,cost);
            ans=min({op1,op2,op3});
        }
        return dp[ind][free]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        n=days.size();
        return fun(0,0,days,costs);
        
    }
};
