class Solution {
public:
    int waysToMakeFair(vector<int>& nums) 
    {
        int count=0;
        int prefix_even=0;
        int prefix_odd=0;
        int even=0;
        int odd=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                prefix_even+=nums[i]; 
            }
            else
            {
                prefix_odd+=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                prefix_even=prefix_even-nums[i];
            }
            else
            {
                prefix_odd=prefix_odd-nums[i];
            }
            if((even+prefix_odd)==(odd+prefix_even))
            {
                count++;
            }
            if(i%2==0)
            {
                even+=nums[i];
            }
            else
            {
                odd+=nums[i];
            }
        }
        return count;
    }
};
