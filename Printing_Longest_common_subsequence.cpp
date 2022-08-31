vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {
int m=a.size();
int n=b.size();

vector<vector<int>>dp(m+1,vector<int>(n+1,0));
for(int i =m-1;i>=0;i--){
    for(int j=n-1;j>=0;j--){
     if(a[i]==b[j])dp[i][j]=dp[i+1][j+1]+1;   
     else dp[i][j]=max(dp[i+1][j],dp[i][j+1]);   
    }
}
  int i=0,j=0;
vector<int>ans;
while(i<m && j<n ){
 if(a[i]==b[j]){
     ans.push_back(a[i]);
     i++;
     j++;
 }else{
   if(dp[i+1][j]>=dp[i][j+1])i++;
   else if(dp[i+1][j]<dp[i][j+1])j++;  
 }   }


return ans;
}
