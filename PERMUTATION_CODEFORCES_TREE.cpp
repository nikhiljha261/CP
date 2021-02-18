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
int n;
vector<int> v[105];
int d[105];
bool vis[105];
int per[105];

int find(int l,int h)
{
    int ind=-1;
    int maxi=INT_MIN;
    loop(i,l,h+1)
    {
        if(per[i]>maxi)
        {
            maxi=per[i];
            ind=i;
        }
    }
    return per[ind];
}
void fun(int l,int h)
{
    if(h==l-1 || l==h+1)
    {
        return ;
    }
    int ind=-1;
    int maxi=INT_MIN;
    loop(i,l,h+1)
    {
        if(per[i]>maxi)
        {
            maxi=per[i];
            ind=i;
        }
    }
    int left=find(l,ind-1);
    int right=find(ind+1,h);
    v[maxi].push_back(left);
    v[maxi].push_back(right);
    fun(l,ind-1);
    fun(ind+1,h);

}

void dfs(int src,int dist)
{
    vis[src]=true;
    for(auto i : v[src])
    {
        if(vis[i]==false)
        {
            d[i]=1+dist;
            dfs(i,1+dist);
        }
    }
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
        loop(i,0,105)
        {
            v[i].clear();
            // d[i].clear();
        }
        memset(d,0,sizeof(d));
        memset(vis,false,sizeof(vis));
        cin>>n;
        loop(i,0,n)
        {
            cin>>per[i];
        } 
        fun(0,n-1);
        int ans=INT_MIN;
        loop(i,0,n)
        {
            if(per[i]>ans)
            {
                ans=per[i];
            }
        }
        dfs(ans,0);
        loop(i,0,n)
        {
            cout<<d[per[i]]<<" ";
        }
        cout<<endl;
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

