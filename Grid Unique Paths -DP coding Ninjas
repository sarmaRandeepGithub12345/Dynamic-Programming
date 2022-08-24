int uniquePaths(int m, int n) {
vector<int>temp(n,1);
    vector<int>ans(n,0);
for(int i=1;i<m;i++){
    for(int j=0;j<n;j++){
        if(j==0)ans[j]=1;
        else ans[j]=ans[j-1]+temp[j];
    }temp=ans;
}    
    
    return temp[n-1];
    }
