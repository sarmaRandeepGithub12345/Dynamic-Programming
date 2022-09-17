#include <bits/stdc++.h> 
int longestBitonicSequence(vector<int>& arr, int n) {
	  vector<int>dp(n,1);
for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i]){
            dp[i]=max(dp[i],dp[j]+1);
        }
    }
}
vector<int>dp2(n,1);
for(int i=n-2;i>=0;i--){
    for(int j=n-1;j>i;j--){
        if(arr[j]<arr[i]){
            dp2[i]=max(dp2[i],dp2[j]+1);
        }
    }
}
int ma=0;
for(int i=0;i<n;i++){
    if(ma<dp[i]+dp2[i]-1){
        ma=dp[i]+dp2[i]-1;
    }
}
return ma;
} 
