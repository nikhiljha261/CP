class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        
        vector<int> ans;
        vector<int> finall;
        int l=0;
        int h=a.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(a[mid]==t)
            {
                ans.push_back(mid);
                
                h=mid-1;
            }
            else if(a[mid]>t)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(ans.size()!=0) finall.push_back(ans.back());
        l=0;
        h=a.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(a[mid]==t)
            {
                ans.push_back(mid);
                
                l=mid+1;
            }
            else if(a[mid]>t)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(ans.size()!=0) finall.push_back(ans.back());
       
        if(finall.size()==0)
        {
            finall.push_back(-1);
            finall.push_back(-1);
            return finall;
        }
        
        return finall;
        
        
    }
};
