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
    // ganeshji();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t begin = clock();
    ll t;
    cin>>t;
    loop(tc,1,t+1)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ans=0;
        for(ll i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                ans++;
            }
        }
        k=k-ans;

        cout<<"Case #"<<tc<<":"<<" "<<abs(k)<<endl;
        
    }
    // #ifndef ONLINE_JUDGE 
    //   clock_t end = clock();
    //   cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    // #endif
}

