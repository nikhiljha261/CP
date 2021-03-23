class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        vector<vector<int>> ans;
        if(nums.size()<4){
            return ans;
        }
        for(int i=0;i<n-3;)
        {
            for(int j=i+1;j<n-2;)
            {
                int sum=target-nums[i]-nums[j];
                int a=j+1;
                int b=n-1;
                while(a<b)
                {
                    int rsum=nums[a]+nums[b];
                    if(rsum<sum)
                    {
                        a++;
                    }
                    else if(rsum>sum)
                    {
                        b--;
                    }
                    else
                    {
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[a]);
                        v.push_back(nums[b]);
                        ans.push_back(v);
                        int k=a+1;
                        while(nums[k]==nums[k-1] and k<n)
                        {
                            k=k+1;
                        }
                        a=k;
                        k=b-1;
                        while(nums[k]==nums[k+1] and k>a)
                        {
                            k=k-1;
                        }
                        b=k;
                    }
                }
                int k=j+1;
                while(nums[k]==nums[k-1] and k<n)
                {
                    k=k+1;
                }
                j=k;
                
            }
            int k=i+1;
            while(nums[k]==nums[k-1] and k<n)
            {
                k=k+1;
            }
            i=k;
        }
        return ans;
    }
};
