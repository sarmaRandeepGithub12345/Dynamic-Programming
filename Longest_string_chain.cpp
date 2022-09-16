 int compare(string&parent ,string&son){
  if(parent.length()+1!=son.length())return 0;
    int f=0,s=0;
    while(s<son.length()){
       if(f<parent.length() && parent[f]==son[s]){
           f++;
           s++;
       } else s++;
    }
    if(f==parent.length() && s==son.length())return true;
   else return false;
}
    
static bool cmp(string &a,string &b)
	{    
		int x=a.length();
		int y=b.length();
		if(x==y)
			return a<b;
		return x<y;
	}
    
    int longestStrChain(vector<string>& arr) {
        int n=arr.size();
sort(arr.begin(),arr.end(),cmp);
    vector<int>dp(n,1);
    int ma=1;
  for(int i=1;i<n;i++){
      for(int j=0;j<i;j++){
          if(compare(arr[j],arr[i]) && dp[j]+1>dp[i]){
              dp[i]=dp[j]+1;
          }
      }ma=max(dp[i],ma);
  }  
    
    return ma;
    }
