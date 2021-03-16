#include<bits/stdc++.h>
using namespace std;
int a[51][31];
int n,k,p;
int dp[1505][55];
int fun(int no_p,int ind)
{
    if(no_p==p)
    {
        return 0;
    }
    if(ind==n)
    {
        return INT_MIN;
    }
    if(dp[no_p][ind]!=-1)
    {
        return dp[no_p][ind];
    }
    int ans=INT_MIN;
    int ps=0;
    for(int i=0;i<k;i++)
    {
        ps=ps+a[ind][i];
        if(no_p+i+1<=p)
        {
            ans=max(ans,ps+fun(no_p+i+1,ind+1));
        }
        else
        {
            break;
        }
    }
    ans=max(ans,fun(no_p,ind+1));
    return dp[no_p][ind]=ans;
    
}

int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        cin>>n>>k>>p;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>a[i][j];
            }
        }
        memset(dp,-1,sizeof(dp));
        int anss=fun(0,0);
        cout<<"Case #"<<t<<":"<<" "<<anss<<endl;
    }
}
