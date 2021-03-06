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
        bool vis[n+1];
        memset(vis,false,sizeof(vis));
        vector<int> v;
        int c=0;
        for(int i=n;i>=1;i--)
        {
            if(vis[i]==false and i!=k)
            {
                v.push_back(i);
                vis[k-i]=true;
                c++;
            }
        }
        cout<<c<<endl;
        loop(i,0,c)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}
