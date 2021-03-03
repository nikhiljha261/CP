class Solution {
public:
    int row;
    int col;
    int dp[205][205];
    bool isvalid(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0 || r>=row || c<0 || c>=col)
        {
            return false;
        }
        return true;
    }
    int fun(int r,int c,vector<vector<int>>& grid)
    {
        if(r==row-1 and c==col-1)
        {
            return grid[r][c];
        }
        if(dp[r][c]!=-1) return dp[r][c];
        int op1=INT_MAX;
        if(isvalid(grid,r+1,c)==true)
        {
            op1=min(grid[r][c]+fun(r+1,c,grid),op1);
        }
        if(isvalid(grid,r,c+1)==true)
        {
            op1=min(grid[r][c]+fun(r,c+1,grid),op1);
        }
        return dp[r][c]=op1;
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        row=grid.size();
        col=grid[0].size();
        return fun(0,0,grid);
    }
};
