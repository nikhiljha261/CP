class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        map<char,int> m;
        if(n==0) return 0;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<n)
        {
            if(m[s[j]]==0)
            {
                m[s[j]]++;
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                // i++;
                m[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};
