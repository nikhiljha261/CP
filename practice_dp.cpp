//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(ll i=(a);i<(b);i++)
#define endl            "\n"
// cout<<fixed<<setprecision(9)<<" ";

void ganeshji(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


ll n,e,h,a,b,c;


int main()
{
    ganeshji();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t begin = clock();
    ll t=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>e>>h>>a>>b>>c;
        ll dp[n+1][e+1][h+1];
        loop(i,0,n+1)
        {
            loop(j,0,e+1)
            {
                loop(k,0,h+1)
                {
                    dp[i][j][k]=INT_MAX;
                }
            }
        }
        // vector<vector<vector<int>>> dp(n+1,vector<int>(e+1,vector<int>(h+1)));
        loop(i,0,e+1)
        {
            loop(j,0,h+1)
            {
                dp[0][i][j]=0;
            }
        }
        loop(i,1,n+1)
        {
            if(dp[i-1][e][h]==INT_MAX)
            {
                break;
            }
            loop(j,0,e+1)
            {
                loop(k,0,h+1)
                {
                    if(j-2>=0)
                    {
                        dp[i][j][k]=min(dp[i-1][j-2][k]+a,dp[i][j][k]);
                    }
                    if(k-3>=0)
                    {
                        dp[i][j][k]=min(dp[i-1][j][k-3]+b,dp[i][j][k]);
                    }
                    if(j-1>=0 and k-1>=0)
                    {
                        dp[i][j][k]=min(dp[i-1][j-1][k-1]+c,dp[i][j][k]);
                    }
                }
            }
            
        }
        if(dp[n][e][h]==INT_MAX || dp[n][e][h]<0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<dp[n][e][h]<<endl;
        }
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

