class Solution {
  public:
    vector<vector<string>> ans;
    int n;
    bool isvalid(string x)
    {
        int m=x.length();
        for(int i=0;i<m/2;i++)
        {
            if(x[i]!=x[m-i-1])
            {
                return false;
            }
        }
        return true;
    }
    
    void mcm(string s,int st,int h,vector<string> v)
    {
        if(h==n)
        {
            if(st==n){
                ans.push_back(v);
                return;
            } 
            else return ;
        }
        int j=st;
        for(int i=1;i<=n-st;i++)
        {
            string x=s.substr(j,i);
            if(isvalid(x))
            {
                v.push_back(x);
                mcm(s,st+i,st+i,v);
                v.pop_back();
            }
        }
        return ;
        
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        // code here
        n=S.length();
        vector<string> v;
        mcm(S,0,0,v);
        return ans;
    }
};
