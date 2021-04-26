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

int c;

int dx[4]={+1,-1,0,0};
int dy[4]={0,0,+1,-1};

void dfs(vector<vector<int>>& grid,int i,int j)
{
    c++;
    grid[i][j]=0;
    loop(k,0,4)
    {
        int ni=i+dx[k];
        int nj=j+dy[k];
        if(ni>=0 and ni<grid.size() and nj>=0 and nj<grid[0].size())
        {
            if(grid[ni][nj]==1)
            {
                dfs(grid,ni,nj);
            }
        }
    }
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
        // vector<vector<int>> grid;
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m));
        loop(i,0,n)
        {
            string s;
            cin>>s;
            loop(j,0,m)
            {
                if(s[j]=='0')
                {
                    grid[i][j]=0;
                }
                else
                {
                    grid[i][j]=1;
                }
            }
        }
        // int c=0;
        vector<int> ans;
        loop(i,0,n)
        {
            loop(j,0,m)
            {
                if(grid[i][j]==1)
                {
                    c=0;
                    dfs(grid,i,j);
                    ans.push_back(c);
                }
            }
        }
        int co=0;
        sort(ans.begin(),ans.end(),greater<int>());
        loop(i,0,ans.size())
        {
            if(i%2!=0)
            {
                co=co+ans[i];
            }
        }
        cout<<co<<endl;

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

