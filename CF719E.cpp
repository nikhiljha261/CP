//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(int i=(a);i<(b);i++)
#define endl            "\n"
// cout<<fixed<<setprecision(9)<<" ";
// double rounded = std::floor((V * 100) + .5) / 100;

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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll c=0;
        loop(i,0,n)
        {
            if(s[i]=='*')
            {
                c++;
            }
        }
        if(c==0 or c==1) {
            cout<<0<<endl;
            continue;
        }
        ll ind;
        if(c%2!=0)
        {
            ind=c/2;
            ind++;
        }
        else
        {
            ind=c/2;
        }
        loop(i,0,n)
        {
            if(s[i]=='*')
            {
                ind--;
            }
            if(ind==0)
            {
                ind=i;
                break;
            }
        }
        ll ans=0;
        ll b=0;
        loop(i,ind+1,n)
        {
            if(s[i]=='.')
            {
                b++;
            }
            else
            {
                ans+=b;
            }
        }
        b=0;
        for(int k=ind-1;k>=0;k--)
        {
            if(s[k]=='.')
            {
                b++;
            }
            else
            {
                ans+=b;
            }
        }
        cout<<ans<<endl;

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}  
