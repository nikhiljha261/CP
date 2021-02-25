class Solution {
public:
    
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        if(n==0 || n==1) return true;
        int maxi=INT_MIN;
        int reach=0;
        for(int i=0;i<n;i++)
        {
            if(reach<i)
            {
                return false;
            }
            if(a[i]+i>reach)
            {
                reach=a[i]+i;
            }
        }
        return true;
    }
};
