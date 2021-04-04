class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> grid(n,vector<int>(n,1));
        int r=mines.size();
        for(int i=0;i<r;i++)
        {
            int x=mines[i][0];
            int y=mines[i][1];
            grid[x][y]=0;
        }
        vector<vector<int>> up(n,vector<int>(n,0));
        vector<vector<int>> down(n,vector<int>(n,0));
        vector<vector<int>> right(n,vector<int>(n,0));
        vector<vector<int>> left(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            int pre=0;
            for(int j=0;j<n;j++)
            {
                left[i][j]=pre;
                if(grid[i][j]==1)
                {
                    pre++;
                }
                else
                {
                    pre=0;
                }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            int pre=0;
            for(int j=n-1;j>=0;j--)
            {
                right[i][j]=pre;
                if(grid[i][j]==0)
                {
                    pre=0;
                }
                else
                {
                    pre++;
                }
                
            }
            
        }
        for(int j=0;j<n;j++)
        {
            int pre=0;
            for(int i=0;i<n;i++)
            {
                up[i][j]=pre;
                if(grid[i][j]==0)
                {
                    pre=0;
                }
                else
                {
                    pre++;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            int pre=0;
            for(int i=n-1;i>=0;i--)
            {
                down[i][j]=pre;
                if(grid[i][j]==0)
                {
                    pre=0;
                }
                else
                {
                    pre++;
                }
            }    
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    continue;
                }
                else
                {
                    int val=min({up[i][j],down[i][j],right[i][j],left[i][j]});
                    ans=max(ans,1+val);
                }
            }
        }
        return ans;
        
    }
};
