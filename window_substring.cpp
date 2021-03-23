string Solution::minWindow(string a, string b) {
    vector<int> ind;
    int n=a.length();
    int m=b.length();
    map<char,bool> st;
    map<char,int> mp;
    for(int i=0;i<m;i++)
    {
        st[b[i]]=true;
        mp[b[i]]++;
    }
    int j=0;
    int i=0;
    int len=INT_MAX;
    int c=0;
    int s=0;
    map<char,int> given;
    for(int k=0;k<n;k++)
    {
        if(st[a[k]]==true)
        {
            s=k;
            break;
        }
    }
    while(j<n)
    {
        given[a[j]]++;
        if(given[a[j]]==mp[a[j]])
        {
            c++;
        }
        if(c==m)
        {
            len=min(j-s,len);
            given[a[i]]--;
            i++;
            while(given[a[i]]>=mp[a[i]] and i<=j)
            {
                given[a[i]]--;
                i++;
            }
            s=i;
            c--;
        }
        
    }
    return s.substr(s,len);
}
