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
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        map<char,vector<int>> mp;
        loop(i,0,n)
        {
            mp[a[i]].push_back(i);
        }
        int abhi=-1;
        int mini[m];
        int maxi[m];
        loop(i,0,m)
        {
            int x=upper_bound(mp[b[i]].begin(),mp[b[i]].end(),abhi)-mp[b[i]].begin();
            int pre=mp[b[i]][x];
            abhi=pre;
            mini[i]=pre;
        }
        for(auto &i : mp)
        {
            for(auto &j : i.second)
            {
                j=-j;
            }
            sort(i.second.begin(),i.second.end());
        }
        abhi=-n;
        for(int i=m-1;i>=0;i--)
        {

            int x=upper_bound(mp[b[i]].begin(),mp[b[i]].end(),abhi)-mp[b[i]].begin();
            int pre=mp[b[i]][x];
            abhi=pre;
            maxi[i]=-pre;

        }
        int ans=0;
        loop(i,1,m)
        {
            ans=max(ans,maxi[i]-mini[i-1]);
        }
        cout<<ans<<endl;

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

