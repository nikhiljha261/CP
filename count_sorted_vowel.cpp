class Solution {
public:
    int n;
    int fun(int ind,int c)
    {
        if(c==n)
        {
            return 1;
        }
        if(ind==5)
        {
            if(c==n)
            {
                return 1;
            }
            else return 0;
        }
        return fun(ind+1,c)+fun(ind,c+1);
        
    }
    int countVowelStrings(int N) {
        n=N;
        return fun(0,0);
        
    }
};
