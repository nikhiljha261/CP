class Solution {
public:
    bool fun(int h,int l,bool alex,vector<int>& piles,int a,int lee)
    {
        if(h<l)
        {
            if(a>l)
            {
                return true;
            }
            else
            {
                return false;
            }
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
        return ans;
    }
    bool stoneGame(vector<int>& piles) {
        int h=piles.size();
        int l=0;
        return fun(h-1,l,true,piles,0,0);
        // return true;
    }
};
