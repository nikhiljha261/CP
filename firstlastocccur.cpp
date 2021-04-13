// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int a[], int n , int x )
{
    int l=0;
    int h=n;
    int high=-1;
    int low=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==x)
        {
            low=mid;
            h=mid-1;
        }
        else if(a[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    l=0;
    h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==x)
        {
            high=mid;
            l=mid+1;
        }
        else if(a[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    vector<int> v;
    v.push_back(low);
    v.push_back(high);
    return v;
}
