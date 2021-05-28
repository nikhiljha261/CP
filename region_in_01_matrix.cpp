int dx[8]={+1,-1,0,0,+1,+1,-1,-1};
int dy[8]={0,0,+1,-1,+1,-1,+1,-1};
int n;
int m;
int count(vector<vector<int>>& grid,int i,int j)
{
    if(i<0 or i>=n or j<0 or j>=m or grid[i][j]==-1 or grid[i][j]==0)
    {
        return 0;
    }
    int ans=1;
    grid[i][j]=-1;
    for(int k=0;k<8;k++)
    {
        int ni=i+dx[k];
        int nj=j+dy[k];
        ans=ans+count(grid,ni,nj);
    }
    return ans;
}

int Solution::solve(vector<vector<int> > &grid) {
    n=grid.size();
    m=grid[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                ans=max(ans,count(grid,i,j));
            }
        }
    }
    return ans;
} 
