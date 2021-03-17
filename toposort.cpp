class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> v[n];
        vector<int> ind(n,0);
        for(int i=0;i<p.size();i++)
        {
            for(int j=0;j<p[0].size();j++)
            {
                int x=p[i][1];
                int y=p[i][0];
                v[x].push_back(y);
                ind[p[i][0]]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(ind[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto i : v[x])
            {
                ind[i]--;
                if(ind[i]==0)
                {
                    q.push(i);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ind[i]>0)
            {
                return false;
            }
        }
        return true;
    }
};
