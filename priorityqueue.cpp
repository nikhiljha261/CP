class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        vector<int> ans;
        int st=0;
        vector<int> vis(n,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
        while(ans.size()!=n)
        {
            for(int i=0;i<n;i++)
            {
                if(tasks[i][0]<=st and vis[i]==0)
                {
                    vis[i]=1;
                    pq.push({tasks[i][1],i});
                }
            }
            if(pq.size()!=0)
            {
                auto ele=pq.top();
                st=st+ele.first;
                pq.pop();
                ans.push_back(ele.second);
            }
            else st=st+1;
        }
        return ans;
    }
};
