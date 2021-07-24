
bool prime[100005];


void sieve()
{
    loop(i,1,100005)
    {
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=100005;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i+i;j<=100005;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int MOD=1000000007;
        int n=s.length();
        vector<bool> dp(n,false);
        vector<int> countdp(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                string temp=s.substr(j,i-j+1);
                int x=stoi(temp);
                if(j==0)
                {
                    if(prime[x]==true)
                    {
                        // cout<<"first";
                        dp[i]=true;
                        countdp[i]=(countdp[i]+1)%MOD;
                    }
                }
                else
                {
                    // cout<<"second";
                    if(prime[x]==true and dp[j-1]==true)
                    {
                        dp[i]=true;
                        countdp[i]=(countdp[i]+countdp[j-1])%MOD;
                    }
                }

            }

        }
        cout<<countdp[n-1]<<endl;
     
    }
}
