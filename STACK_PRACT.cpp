#include <bits/stdc++.h>
using namespace std;
//nikhil jha
#define ll long long
int main() {
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,m;
      cin>>n>>m;
      set<ll>h1;
      stack<ll>s1;
      h1.insert(0);
      s1.push(0);
      ll a[n];
      ll b[m];
          for(ll i=0;i<n;i++){
              cin>>a[i];
          }
          for(ll i=0;i<m;i++){
              cin>>b[i];
          }
          while(!s1.empty())
          {
              ll x=(s1.top());
              s1.pop();
              for(ll i=0;i<n;i++){
                  ll y=a[i];
                  bool is_in = h1.find(x|y) != h1.end();
                  if(!is_in){
                      h1.insert(x|y);
                      s1.push(x|y);
                  }
              }
              for(ll i=0;i<m;i++){
                  ll y=b[i];
                  bool its_in = h1.find(x&y) != h1.end();
                  if(!its_in){
                      h1.insert(x&y);
                      s1.push(x&y);
                  }
              }
          }
          
          cout<<h1.size()<<endl;
  }
  return 0;
}
