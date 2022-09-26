int maxCoins(vector<int>& arr)
{
	arr.push_back(1);
arr.insert(arr.begin(),1);

 int n=arr.size();
 vector<vector<int>>dp(n,vector<int>(n,0));
  
for(int i=n-2;i>=1;i--){
    for(int j=i;j<n-1;j++){
        
    if(i==j)dp[i][j]=arr[i-1]*arr[i]*arr[i+1];    
    else if(j==i+1){
    int first=arr[i-1]*arr[i]*arr[j]+arr[i-1]*arr[j]*arr[j+1];
    int second=arr[i]*arr[j]*arr[j+1]+arr[i-1]*arr[i]*arr[j+1];
    dp[i][j]=max(first,second);
    }else{
     int ma=0;
     //cout<<"HI"<<endl;
     for(int k=i-1;k<j;k++){
    ma=max(ma,dp[i][k]+dp[k+2][j]+arr[i-1]*arr[j+1]*arr[k+1]);     
         
         
     }
      dp[i][j]=ma;  
    }    
    }
}

return dp[1][n-2];
}
