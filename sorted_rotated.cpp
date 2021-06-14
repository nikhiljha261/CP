int bs(int a[],int l,int h,int key)
    {
        int n=h;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==key)
            {
                return mid;
            }
            else if(a[mid]<key)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return -1;
    }
    int findpivot(int a[],int l,int h)
    {
        int n=h;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(mid-1!=0 and a[mid]<a[mid-1])
            {
                return mid;
            }
            if(mid!=n and a[mid]>a[mid+1])
            {
                return mid;
            }
            else if(a[mid]<a[0])
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
    int search(int a[], int l, int h, int key){
        int ind=findpivot(a,l,h);
        int x=-1;
        int y=-1;
        if(ind==-1)
        {
            return bs(a,l,h,key);
        }
        else
        {
            x=bs(a,l,ind-1,key);
            y=bs(a,ind,h,key);
        }
        return max(x,y);
    }
