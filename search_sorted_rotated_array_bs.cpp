class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size();
        if(a[0]<=a[n-1])
        {
            int l=0;
            int h=n-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(a[mid]==t)
                {
                    return mid;
                }
                else  if(a[mid]>t)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }

            }
            return -1;
        }
        else
        {
            int l=0;
            int h=n-1;
            int temp=-1;
            while(l<h)
            {
                int mid=l+(h-l)/2;
                if(a[mid]>a[l])
                {
                    l=mid;
                }
                else
                {
                    h=mid;
                    
                }
                temp=h;
            }
            l=0;
            h=temp;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(a[mid]==t)
                {
                    return mid;
                }
                else  if(a[mid]>t)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }

            }
            l=temp+1;
            h=n-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if(a[mid]==t)
                {
                    return mid;
                }
                else  if(a[mid]>t)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }

            }
        }
        return -1;
        
        
    }
};
