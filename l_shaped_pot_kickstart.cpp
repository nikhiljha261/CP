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

ll fun(ll a,ll b){
  ll ans=0;
  for(ll i=2;i<=a;i++){
      if((i*2)<=b){
          ans++;
      }
      else{
          break;
      }
  }
  for(ll i=2;i<=b;i++){
      if((i*2)<=a){
          ans++;
      }
      else{
          break;
      }
  }
  return ans;
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
        ll r,c;
        cin>>r>>c;
        ll mat[r][c];
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                cin>>mat[i][j];
            }
        }
        ll v1[r][c];
        ll h1[r][c];
        ll v2[r][c];
        ll h2[r][c];
        
        
        for(ll j=0;j<c;j++){
            ll prev=0;
            for(ll i=r-1;i>=0;i--){
                if(mat[i][j]==0){
                    prev=0;
                }
                else{
                    prev++;
                }
                v2[i][j]=prev;
            }
        }
        
        for(ll i=0;i<r;i++){
            ll prev=0;
            for(ll j=c-1;j>=0;j--){
                if(mat[i][j]==0){
                    prev=0;
                }
                else{
                    prev++;
                }
                h2[i][j]=prev;
            }
            
        }
        for(ll j=0;j<c;j++){
            ll prev=0;
            for(ll i=0;i<r;i++){
                if(mat[i][j]==0){
                    prev=0;
                }
                else{
                    prev++;
                }
                v1[i][j]=prev;
            }
        }
        
        
        for(ll i=0;i<r;i++){
            ll prev=0;
            for(ll j=0;j<c;j++){
                if(mat[i][j]==0){
                    prev=0;
                }
                else{
                    prev++;
                }
                h1[i][j]=prev;
            }
            
        }
        
        ll ans=0;
        for(ll i=0;i<r;i++){
            for(ll j=0;j<c;j++){
                ans+=fun(v1[i][j],h1[i][j]);
                
                ans+=fun(v2[i][j],h1[i][j]);
                
                ans+=fun(v1[i][j],h2[i][j]);
                
                ans+=fun(v2[i][j],h2[i][j]);
                
            }
        }

        cout<<"Case #"<<tc<<":"<<" "<<ans<<endl;
        
    }
    // #ifndef ONLINE_JUDGE 
    //   clock_t end = clock();
    //   cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    // #endif
}

