int maximumProfit(vector<int> &prices, int n, int k)
{
   vector<int>temp(n,0);
   for(int i=1;i<=k;i++){
       vector<int>ans(n,0);
       int ma=-10000;
       for(int j=1;j<n;j++){
      if(j==1){
       ma=temp[j-1]-prices[j-1];  
       ans[j]=max(ans[j-1],ma+prices[j]);
        
      }else{
       ma=max(ma,temp[j-1]-prices[j-1]);
       ans[j]=max(ans[j-1],ma+prices[j]);
      }
           
       }
       temp=ans;
   } return temp[n-1];
}
