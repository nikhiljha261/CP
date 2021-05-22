class Solution {
public:
    int dx[4]={+1,-1,0,0};
    int dy[4]={0,0,+1,-1};
    int n,m;
    int ans=0;
    void dfs(vector<vector<int>> grid,int x,int y,int count)
    {
        if(x<0 or y<0 or x>=n or y>=m or grid[x][y]==-1)
        {
            return ;
        }
        int cell=grid[x][y];
        if(cell==2)
        {
            if(count==0)
            {
                ans++;
                return ;
            }
            else
            {
                return ;
            }
        }
        count--;
        grid[x][y]=-1;
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            dfs(grid,nx,ny,count);
        }
        grid[x][y]=0;
        count++;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int x,y,c;
        c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    x=i;
                    y=j;
                }
                if(grid[i][j]==0)
                {
                    c++;
                }
            }
        }
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            dfs(grid,nx,ny,c);
        }
        return ans-1;
        
    }
};






// from start i will go in every direction
// from every direction i will go in every direction 
