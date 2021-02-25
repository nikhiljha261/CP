class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        int max=nums[0];
        int curmax=nums[0];
        int temp;
        int curmin=nums[0];
        for(int i=1;i<nums.size();i++){
            /*curmax=max(nums[i],curmax*nums[i])*/
            temp=curmax;
            curmax=std::max({nums[i],curmax*nums[i],curmin*nums[i]});
            curmin=std::min({nums[i],temp*nums[i],curmin*nums[i]});
            if(curmax>max){
                max=curmax;
            }
            
            
            
        }
        return max;
        
    }
};
