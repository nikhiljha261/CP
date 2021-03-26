//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(int i=(a);i<(b);i++)
#define endl            "\n"
// cout<<fixed<<setprecision(9)<<" ";

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
    clock_t begin = clock();
    ll t=1;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.length();
        int m=b.length();
        // int dp[n+1][m+1];
        int maxi=0;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        loop(i,1,n+1)
        {
            loop(j,1,m+1)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    maxi=max(dp[i][j],maxi);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        cout<<abs(n-maxi)+abs(m-maxi)<<endl;
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

