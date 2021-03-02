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
    ganeshji();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t begin = clock();
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        char op;
        int maxi=INT_MIN;
        for(auto i : m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                op=i.first;
            }
        }
        // cout<<maxi;
        if(maxi!=n/2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]==op)
        {
            // cout<<"hey";
            int o=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]==op)
                {
                    o++;
                }
                else
                {
                    o--;
                }
                if(o<0)
                {
                    o=-1;
                    break;
                }
            }
            if(o==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int o=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=op)
                {
                    o++;
                }
                else
                {
                    o--;
                }
                if(o<0)
                {
                    o=-1;
                    break;
                }
            }
            if(o==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}
