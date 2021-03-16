#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int n;
        cin>>n;
        int b;
        cin>>b;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(b-a[i]>=0)
            {
                b=b-a[i];
                ans++;
            }
            else break;
        }
        cout<<"Case #"<<t<<":"<<" "<<ans<<endl;
    }
}
