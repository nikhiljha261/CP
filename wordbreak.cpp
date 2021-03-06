// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);

// User code will be pasted here

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings

int wordBreak(string a, vector<string> &b) {
    int sz=b.size();
    int n=a.length();
    map<string,bool> mp;
    for(auto i : b)
    {
        mp[i]=true;
    }
    bool dp[n][n];
    memset(dp,false,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        if(i!=0)
        {
            for(int j=i;j>=0;j--)
            {
                if(j>0)
                {
                    string s=a.substr(j,i-j+1);
                    if(mp[s]==true and dp[0][j-1]==true)
                    {
                        dp[0][i]=true;
                    }
                }
                else
                {
                    string s=a.substr(j,i-j+1);
                    if(mp[s]==true)
                    {
                        dp[0][i]=true;
                    }
                }
            }
        }
        else
        {
            string s=a.substr(0,1);
            if(mp[s]==true)
            {
                dp[0][0]=true;
            }
        }
    }
    if(dp[0][n-1]==true)
    {
        return 1;
    }
    return 0;
    
}
