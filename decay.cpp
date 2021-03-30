int dp[1005][1005];
int func(int forward, int backward, int decay){
     
     if(decay==1 || forward ==0){
         return dp[forward][decay] =1;
     }
 
     if(dp[forward][decay]!=-1){
 
         return dp[forward][decay];
     }
 
     return dp[forward][decay] = (func(backward,forward,decay-1) + func(forward-1,backward+1,decay))%mod;
 
}
