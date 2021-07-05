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

bool check(vector<ll>& a,ll d)
{
    ll n=a.size();
    loop(i,0,n)
    {
        if(a[i]%d!=0)
        {
            return false;
        }
        // return true;
    }
    return true;

}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int MaxGCD(vector<ll>& a, ll n)
{
 
    
    ll Prefix[n + 2];
    ll Suffix[n + 2];
    Prefix[1] = a[0];
    for (ll i = 2; i <= n; i += 1) {
        Prefix[i] = gcd(Prefix[i - 1], a[i - 1]);
    }
    Suffix[n] = a[n - 1];
    for (ll i = n - 1; i >= 1; i -= 1) {
        Suffix[i] = gcd(Suffix[i + 1], a[i - 1]);
    }
    ll ans = max(Suffix[2], Prefix[n - 1]);
 
    // If any other element is replaced
    for (ll i = 2; i < n; i += 1) {
        ans = max(ans, gcd(Prefix[i - 1], Suffix[i + 1]));
    }
 
    return ans;
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
        ll n;
        cin>>n;
        vector<ll> a(n);
        loop(i,0,n)
        {
            cin>>a[i];
        }
        // ll mini=INT_MAX;
        // loop(i,0,n)
        // {
        //     mini=min(a[i],mini);
        // }
        // ll ind;
        // ll maxi=INT_MIN;
        // loop(i,0,n)
        // {
        //     if(a[i]>maxi)
        //     {
        //         ind=i;
        //         maxi=a[i];
        //     }
        // }
        // ll low=0;
        // ll high=mini;
        // for(ll i=high;i>=1;i--)
        // {
        //     ll temp=a[ind];
        //     a[ind]=i;
        //     if(check(a,i)==true)
        //     {
        //         ans=i;
        //         break;
        //     }
        //     a[ind]=temp;
        // }
        if(n<=2)
        {
            if(n==1) cout<<1<<endl;
            if(n==2) cout<<2<<endl;
            continue;
        }
        ll s=0;
        bool count=false;
        ll ans=MaxGCD(a, n);
        // cout<<ans<<" ";
        loop(i,0,n)
        {
            if(a[i]%ans!=0){
                count=true;
                continue;
            }
            s=s+(a[i]/ans);
        }
        if(count==true) s=s+1;
        else{
            sort(a.begin(),a.end());
            ll x=a[n-1]/ans;
            s=s-x;
            s=s+1;
        }
        cout<<s<<endl;
        
    }
} 
