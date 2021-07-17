//har har mahadev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b)     for(ll i=(a);i<(b);i++)
#define endl            "\n"
void ganeshji(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
	#endif
}

bool issafe(vector<int>& b,int n,vector<int>& prea)
{
    int x=n/4;
    int p2=0;
    int rem=n-x;
    int sz=prea.size();
    loop(i,0,min(sz,rem))
    {
        p2=p2+b[i];
    }
    int newrem=n-sz;
    int p1=0;
    if(newrem>=rem)
    {
        p1=rem*100;
        if(p1<p2)
        {
            return false;
        }
    }
    else
    {
        int leftrem=rem-newrem;
        p1=newrem*100;
        int s=0;
        loop(i,0,leftrem)
        {
            s=s+prea[i];
        }
        p1=p1+s;
        if(p1<p2)
        {
            return false;
        }
    }
    // cout<<1;
    return true;
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
         int n;
         cin>>n;
         vector<int> a(n);
         vector<int> b(n);
         vector<int> prea(n);
         int preb[n];
         loop(i,0,n)
         {
            cin>>a[i];
         }
         loop(j,0,n)
         {
            cin>>b[j];
         }
         sort(a.begin(),a.end(),greater<int>());
         sort(b.begin(),b.end(),greater<int>());
         prea[0]=a[0];
         preb[0]=b[0];
         loop(i,1,n)
         {
            prea[i]=a[i]+prea[i-1];
         }
         loop(i,1,n)
         {
            preb[i]=b[i]+preb[i-1];
         }
         int x=n/4;
         int rem=n-x;
         int p1=prea[rem-1];
         int p2=preb[rem-1];
         // cout<<p1<<" "<<p2<<endl;
         if(p1>=p2)
         {
             cout<<0<<endl;
         }
         else
         {
             int l=0;
             int h=1000005;
             int ans=INT_MAX;
             while(l<=h)
             {
                int mid=(l+h)/2;
                if(issafe(b,n+mid,a)==true)
                {
                    h=mid-1;
                    ans=min(ans,mid);
                }
                else
                {
                    l=mid+1;
                }
             }
             cout<<ans<<endl;
         }


    }
} 
