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
    clock_t begin = clock();
    ll t=1;
    // cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=0;
        vector<int> a(n);
        loop(i,0,n)
        {
            cin>>a[i];
            s+=a[i];
        }
        int ans=0;
        if(s%3==0)
        {
            int x=s/3;
            int y=2*x;
            int count=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
                
                if(sum==y)
                {
                    ans+=count;
                }
                if(sum==x)
                {
                    count++;
                }
            }
        }
        cout<<ans;

         
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}
