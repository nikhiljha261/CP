class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.length();
        bool dp[n+1][n+1];
        memset(dp,false,sizeof(dp));
        int curmaxi=1;
        int start=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                curmaxi=2;
                start=i-1;
                dp[i-1][i]=true;
            }
        }
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int x=j;
                int y=j+i-1;
                if(s[x]==s[y])
                {
                    if(dp[x+1][y-1]==true)
                    {
                        curmaxi=i;
                        dp[x][y]=true;
                        start=x;
                    }
                }
            }
        }
        return s.substr(start,curmaxi);
        
        
    }
};class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.length();
        bool dp[n+1][n+1];
        memset(dp,false,sizeof(dp));
        int curmaxi=1;
        int start=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                curmaxi=2;
                start=i-1;
                dp[i-1][i]=true;
            }
        }
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int x=j;
                int y=j+i-1;
                if(s[x]==s[y])
                {
                    if(dp[x+1][y-1]==true)
                    {
                        curmaxi=i;
                        dp[x][y]=true;
                        start=x;
                    }
                }
            }
        }
        return s.substr(start,curmaxi);
        
        
    }
};
