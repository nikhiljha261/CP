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
    ll t=1;
    cin>>t;
    while(t--)
    {
       int a,b,c,d,e,f;
       cin>>a>>b>>c>>d>>e>>f;
       if(a==c)
       {
            if(e==c)
            {
                if(d<=b)
                {
                    if(f>=d and f<=b)
                    {
                        cout<<abs(b-d)+2<<endl;
                    }
                    else
                    {
                        cout<<abs(b-d)<<endl;
                    }
                }
                else
                {
                    if(f<=d and f>=b)
                    {
                        cout<<abs(b-d)+2<<endl;
                    }
                    else
                    {
                        cout<<abs(b-d)<<endl;
                    }
                }
            }
            else
            {
                cout<<abs(b-d)<<endl;
            }
       }
       else if(b==d)
       {
            if(f==d)
            {
                if(c<=a)
                {
                    if(e>=c and e<=a)
                    {
                        cout<<abs(a-c)+2<<endl;
                    }
                    else
                    {
                        cout<<abs(a-c)<<endl;
                    }
                }
                else
                {
                    if(e<=c and e>=a)
                    {
                        cout<<abs(a-c)+2<<endl;
                    }
                    else
                    {
                        cout<<abs(a-c)<<endl;
                    }
                }
            }
            else
            {
                cout<<abs(a-c)<<endl;
            }
       }
       else
       {
            cout<<abs(a-c)+abs(d-b)<<endl;
       }

       
    }
}
