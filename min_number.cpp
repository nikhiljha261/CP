class Solution {
public:
    int minPartitions(string s) {
        int n=s.length();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,s[i]-'0');
        }
        return maxi;
    }
};
