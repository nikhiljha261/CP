#include<bits/stdc++.h>
using namespace std;
int a[100001];
int n,k;
bool isvalid(int d)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        int x=(a[i]-a[i-1]-1)/d;
        c=c+x;
    }
    
    if(c<=k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int bs(int l,int h)
{
    while(l<h)
    {
        int mid=(l+h)/2;
        if(isvalid(mid))
        {
            h=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return h;
}
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=bs(1,1e9);
        cout<<"Case #"<<t<<":"<<" "<<ans<<endl;
    }
}
