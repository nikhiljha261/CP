class Solution {
public:
    int dp[505][505][2];
    int fun(int h,int l,bool alex,vector<int>& piles,int a,int lee)
    {
        if(h<l)
        {
            if(a>l)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(dp[h][l][alex]!=-1)
        {
            return dp[h][l][alex];
        }
        int ans=0;
        if(alex==true)
        {
            
            int op1=piles[h]+fun(h-1,l,false,piles,a+piles[h],lee);
            int op2=piles[l]+fun(h,l+1,false,piles,a+piles[l],lee);
            ans=op1 or op2;
        }
        else
        {
            int op1=piles[h]+fun(h-1,l,true,piles,a,lee+piles[h]);
            int op2=piles[l]+fun(h,l+1,true,piles,a,lee+piles[l]);
            ans=op1 or op2;
            
        }
        return dp[h][l][alex]=ans;
    }
    bool stoneGame(vector<int>& piles) {
        int h=piles.size();
        int l=0;
        memset(dp,-1,sizeof(dp));
        return fun(h-1,l,true,piles,0,0);
        // return true;
    }
};
