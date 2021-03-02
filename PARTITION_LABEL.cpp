class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        int a[26];
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']=i;
        }
        int ind=0;
        vector<int> ans;
        int cur=0;
        for(int i=0;i<n;i++)
        {
            cur=max(cur,a[s[i]-'a']);
            if(cur==i)
            {
                ans.push_back(cur-ind+1);
                ind=i+1;
            }
            
        }
        return ans;
        
    }
};
