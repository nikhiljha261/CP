//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(int i=(a);i<(b);i++)
#define endl            "\n"

void ganeshji(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
	#endif
}

int main()
{
	  ganeshji();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        loop(i,0,n)
        {
            cin>>a[i];
        }
        loop(j,0,n)
        {
            cin>>b[j];
        }
        ll dp[n][2];
        memset(dp,0,sizeof(dp));
        dp[0][0]=a[0];
        dp[0][1]=b[0];
        for(int i=1;i<n;i++)
        {
            
                dp[i][1]=max({dp[i][1],b[i]+dp[i-1][0],dp[i-1][1]});
                dp[i][0]=max({dp[i][0],a[i]+dp[i-1][1],dp[i-1][0]});
                // break;
            
        }
        cout<<max(dp[n-1][0],dp[n-1][1]);
        
    }
} 
