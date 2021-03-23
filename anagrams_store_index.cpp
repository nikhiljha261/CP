vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    int sz=a.size();
    vector<vector<int>> ans;
    map<string,pair<bool,vector<int>>> m;
    for(int i=0;i<sz;i++)
    {
        string s=a[i];
        sort(s.begin(),s.end());
        bool status=m[s].first;
        if(status==true)
        {
            m[s].second.push_back(i+1);
        }
        else
        {
            m[s].second.push_back(i+1);
            m[s].first=true;
        }
        
    }
    for(auto i : m)
    {
        vector<int> v=i.second.second;
        ans.push_back(v);
    }
    return ans;
}
