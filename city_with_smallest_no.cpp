class Solution {
public:
    vector<vector<pair<int,int>>> adj;
    vector<vector<int>> d;
    int n;
    void dij(int src,vector<int>& d)
    {
        d=vector<int>(n,INT_MAX);
        set<pair<int,int>> s;
        d[src]=0;
        s.insert({d[src],src});
        while(!s.empty())
        {
            pair<int,int> temp=*(s.begin());
            s.erase(s.begin());
            int node=temp.second;
            for(auto i : adj[node])
            {
                int wt=i.second;
                int child=i.first;
                if(d[child]>d[node]+wt)
                {
                    if(d[child]!=INT_MAX)
                    {
                        s.erase(s.find({d[child],child}));
                    }
                    d[child]=d[node]+wt;
                    s.insert({d[child],child});
                }
            }
        }
        return ;

    }
    int findTheCity(int N, vector<vector<int>>& edges, int dt) {
        n=N;
        adj=vector<vector<pair<int,int>>>(n);
        for(int i=0;i<edges.size();i++)
        {
            int a,b,w;
            a=edges[i][0];
            b=edges[i][1];
            w=edges[i][2];
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }
        d=vector<vector<int>>(n);
        for(int i=0;i<n;i++)
        {
            dij(i,d[i]);
        }
        int ans=INT_MAX;
        int node=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(d[i][j]<=dt)
                    {
                        c++;
                    }
                }
            }
            cout<<c<<endl;
            if(c<ans)
            {
                ans=c;
                node=i;
            }
            if(c==ans)
            {
                node=i;
            }
        }
        return node;
    }
};
