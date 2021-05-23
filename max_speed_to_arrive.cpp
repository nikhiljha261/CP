class Solution {
public:
    double calc(vector<int>& d,int s)
    {
        int sz=d.size();
        double tt=0.0;
        for(int i=0;i<sz;i++)
        {
            if(i!=sz-1)
            {
                tt=tt+((d[i]+s-1)/s);
            }
            else
            {
                tt=tt+(((double)d[i])/s);
            }
        }
        return tt;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int sz=dist.size();
        if (hour < (double)(sz - 1))
            return -1;
        int l=1;
        int h=10000000;
        while(l<h)
        {
            int mid=(l+h)/2;//this is the min speed
            double tt=calc(dist,mid);
            // cout<<tt<<endl;
            if(tt<=hour)
            {
                h=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return h;
    }
};
