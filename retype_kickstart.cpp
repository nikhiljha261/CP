#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        ll n,k,s;
        cin>>n>>k>>s;
        ll op1=k;
        ll op2=k;
        op2+=k-s;
        op2+=n-s;
        op1+=n;
        cout<<"Case #"<<t<<":"<<" "<<min(op1,op2)<<endl;
    }
}
