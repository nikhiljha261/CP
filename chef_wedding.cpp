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
        int n,k;
        cin>>n>>k;
        int a[n+1];
        loop(i,1,n+1)
        {
            cin>>a[i];
        }
        vector<int> dp(n+1,0);
        dp[0]=0;
        loop(i,1,n+1)
        {
            dp[i]=dp[i-1]+k;
            map<int,int> m;
            int c=0;
            for(int j=i;j>=1;j--)
            {
                m[a[j]]++;
                if(m[a[j]]==2)
                {
                    c=c+2;
                }
                else if(m[a[j]]>2)
                {
                    c=c+1;
                }
                dp[i]=min(dp[i],dp[j-1]+k+c);

            }
        }
        cout<<dp[n]<<endl;
        
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

