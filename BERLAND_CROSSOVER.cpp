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
        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        int u1=u;
        int r1=r;
        int l1=l;
        int d1=d;
        if(u==n)
        {
            r1--;
            l1--;
        }
        if(r==n)
        {
            u1--;
            d1--;
        }
        if(l==n)
        {
            d1--;
            u1--;
        }
        if(d==n)
        {
            r1--;
            l1--;
        }
        if(u==n-1)
        {
            if(r1>l1) r1--;
            else l1--;
        }
        if(d==n-1)
        {
            if(r1>l1) r1--;
            else l1--;
        }
        if(r==n-1)
        {
            if(u1>d1) u1--;
            else d1--;
        }
        if(l==n-1)
        {
            if(u1>d1) u1--;
            else d1--;
        }
        if(u1<0 || d1<0 || l1<0 || r1<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

