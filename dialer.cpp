class Solution {
public:
    vector<string> letterCombinations(string s) {
        vector<string> ans;
        if(s=="") return ans;
        
        // x+=s[0];
        queue<string> q;
        // q.push(x);
        map<int,vector<char>> m;
        m[2].push_back('a');
        m[2].push_back('b');
        m[2].push_back('c');
        m[3].push_back('d');
        m[3].push_back('e');
        m[3].push_back('f');
        m[4].push_back('g');
        m[4].push_back('h');
        m[4].push_back('i');
        m[5].push_back('j');
        m[5].push_back('k');
        m[5].push_back('l');
        m[6].push_back('m');
        m[6].push_back('n');
        m[6].push_back('o');
        m[7].push_back('p');
        m[7].push_back('q');
        m[7].push_back('r');
        m[7].push_back('s');
        m[8].push_back('t');
        m[8].push_back('u');
        m[8].push_back('v');
        m[9].push_back('w');
        m[9].push_back('x');
        m[9].push_back('y');
        m[9].push_back('z');
        for(auto i : m[s[0]-'0'])
        {
            string x;
            x+=i;
            q.push(x);
            cout<<x<<" ";
        }
        while(!q.empty())
        {
            string temp=q.front();
            // cout<<temp<<" ";
            q.pop();
            if(temp.length()==s.length())
            {
                ans.push_back(temp);
            }
            else
            {
                int ind=temp.length();
                for(auto chracter : m[s[ind]-'0'])
                {
                    string x=temp;
                    
                    x+=chracter;
                    q.push(x);
                    
                }
            }
        }
        return ans;
        
    }
};
