#include <bits/stdc++.h> 
//O(n*n)->time complexity
int palindromePartitioning(string str) {
    // Write your code here
    int n=str.size();
    vector<vector<int>>palindrome(n,vector<int>(n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(i==j)palindrome[i][j]=1;
            else if(j==i+1){
                if(str[i]==str[j])palindrome[i][j]=1;
            }else{
             int tmp=(str[i]==str[j]);   
             int middle=palindrome[i+1][j-1];
             palindrome[i][j]=tmp&middle;   
            }
        }
    }
    
vector<int>dp(n,0);
 
 for(int j=1;j<n;j++){
     if(palindrome[0][j])dp[j]=0;
     else{
     int mi=1e9+7;
     for(int i=j;i>=1;i--){
        if(palindrome[i][j]){
            if(dp[i-1]<mi){
                mi=dp[i-1];
                
            }
        } 
     }dp[j]=mi+1;}
 }   
    return dp[n-1];
}
//o(n*n*n)
#include <bits/stdc++.h> 
int palindromePartitioning(string str) {
    // Write your code here
    int n=str.size();
    vector<vector<int>>palindrome(n,vector<int>(n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(i==j)palindrome[i][j]=1;
            else if(j==i+1){
                if(str[i]==str[j])palindrome[i][j]=1;
            }else{
             int tmp=(str[i]==str[j]);   
             int middle=palindrome[i+1][j-1];
             palindrome[i][j]=tmp&middle;   
            }
        }
    }
    
vector<vector<int>>dp(n,vector<int>(n,0));
for(int i=n-1;i>=0;i--){
    for(int j=i;j<n;j++){
        if(palindrome[i][j])dp[i][j]=0;
        else{
        int mi=1e9+7;
        for(int k=i;k<j;k++){
        mi=min(mi,dp[i][k]+dp[k+1][j]+1);    
        }dp[i][j]=mi;
            
        }
    }
}return dp[0][n-1];
}


