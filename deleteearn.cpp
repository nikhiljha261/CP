int helper(vector<int>& nums, unordered_map<int,int>freq, int maxNum ){
    // int n=nums.size();
    int *dp=new int[maxNum+1];
    //dp[i] signifies earning till i element (0<=i<=max element of nums)
    dp[0]=0;
    dp[1]=freq[1];
    for(int i=2;i<=maxNum;i++){
        if(freq.count(i)){
            int deleting_i=dp[i-2] + i*freq[i]; //dp[i-2] is the pervious earning; not taken dp[i-1] becz for deleting i, i-1 should exist; if i-1 has already deleted then i will never exist (accordning to qsn deleting num[i] erases num[i]-1 & num[i]+1
            int not_deleting_i=dp[i-1]; //if i not deleted then we don't anything and consider previous result till now
            dp[i]=max(deleting_i, not_deleting_i);
        }
        else{            // i elemnt not present in nums array
            dp[i]=dp[i-1];
        }
    }
    return dp[maxNum];
}


int deleteAndEarn(vector<int>& nums) {
    unordered_map<int,int>freq; //storing frequency of all elements
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    int maxNum=*max_element(nums.begin(),nums.end());
    int ans =helper(nums,freq,maxNum);
    return ans;


}
