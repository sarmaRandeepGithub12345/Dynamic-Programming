#include <bits/stdc++.h> 
int maximumSubarray(vector<int> &arr, int k)
{
    // Write your code here.
    int n=arr.size();
        vector<int>dp(n,0);
        dp[0]=arr[0];
        for(int j=1;j<n;j++){
          int ma=-1000000,m=-1000000;
            for(int i=j;(j-i)<k;i--){
           ma=max(ma,arr[i]);
            if(i==0){
           m=max(m,(j-i+1)*ma);
                    
                    
               break;
           }else{
            m=max(m,dp[i-1]+(j-i+1)*ma);  
           } 
          }
        dp[j]=m;
        }
        return dp[n-1];
}
