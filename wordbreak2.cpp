class Solution {
public:
    vector<string> ans;
    map<string,bool> m;
    void fun(int ind,string s,string temp,vector<string> v)
    {
        // cout<<temp<<endl;
        if(ind==s.length())
        {
            if(m[temp]==true)
            {
                // cout<<1;
                string t="";
                v.push_back(temp);
                int sz=v.size();
                for(int i=0;i<v.size();i++)
                {
                    t=t+v[i];
                    if(i!=sz-1) t=t+" ";
                }
                ans.push_back(t);
            }
            return ;
        }temp=temp+s[ind];
        if(m[temp]==true)
        {
            v.push_back(temp);
            string t="";
            fun(ind+1,s,t,v);
            v.pop_back();
        }
        string t="";
        t=t+temp+s[ind];
        fun(ind+1,s,temp,v);
        return ;
        
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
       for(auto i : wordDict)
       {
           m[i]=true;
       }
        vector<string> v;
        string temp="";
        fun(0,s,temp,v);
        return ans;
    }
};
