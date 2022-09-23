
int cost(int n, int c, vector<int> &cuts){
    cuts.push_back(n);
    cuts.insert(cuts.begin(),0);
    sort(cuts.begin(),cuts.end());
    vector<vector<int>>dp(c+2,vector<int>(c+2,0));
for(int i=c;i>=1;i--){
    for(int j=1;j<=c;j++){
      if(i>j)continue;
        int mi=1e9;
        for(int k=i;k<=j;k++){
         mi=min(mi,cuts[j+1]-cuts[i-1]+dp[i][k-1]+dp[k+1][j]);   
        }dp[i][j]=mi;
    }
}
    
    return dp[1][c];
}
