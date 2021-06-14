
    int findOnce(int a[], int n)
    {
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid-1]!=a[mid] and a[mid]!=a[mid+1])
            {
                return a[mid];
            }
            if(a[mid-1]==a[mid])
            {
                int x=l;
                int y=mid-2;
                if((y-x+1)%2==0)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-2;
                }
                
                
            }
            else
            {
                int x=l;
                int y=mid-1;
                if((y-x+1)%2==0)
                {
                    l=mid+2;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
        return 0;
    }


