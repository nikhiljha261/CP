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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        // cout<<s[1]-'a';
        int dp[n+1][26];
        memset(dp,0,sizeof(dp)); 
        if(s[0]!='?' and s[n-1]!='?')
        {
            if(s[0]!=s[n-1])
            {
                cout<<0<<endl;
                continue;
            }
        } 
           
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(i==1)//start
                {
                    
                    if(s[i-1]=='?' and s[n-1]=='?')
                    {
                        dp[i][j]=1;
                    }
                    else
                    {
                        int x;
                        if(s[0]!='?') x=s[0]-'a';
                        else x=s[n-1]-'a';
                        // cout<<x<<endl;
                        dp[i][x]=1;
                    }
                }
                else
                {
                    if(s[i-1]=='?')
                    {
                        for(int k=0;k<26;k++)
                        {
                            if(k!=j)
                            {
                                dp[i][j]+=dp[i-1][k];
                            }
                        }
                    }
                    else
                    {
                        int x=s[i-1]-'a';
                        for(int k=0;k<26;k++)
                        {
                            if(k!=x)
                            {
                                dp[i][x]+=dp[i-1][k];
                            }
                        }
                        break;
                    }

                }
                

            }
        }
        // loop(i,1,n)
        // {
        //     loop(j,0,26)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        if(s[0]=='?' and s[n-1]=='?')
        {
            loop(i,0,26)
            {
                if(dp[0][i]==1)
                {
                    loop(j,0,26)
                    {
                        int x=i;
                        if(j!=x)
                        {
                            ans=ans+dp[n-1][j];
                        }
                        
                    }
                }
                
            }
        }
        else
        {
            loop(i,0,26)
            {
                int x=s[n-1]-'a';
                if(i!=x)
                {
                    ans=ans+dp[n-1][i];
                }
                
            }
        }
        cout<<ans<<endl;
        
    }
} 
