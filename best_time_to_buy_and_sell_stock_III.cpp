//2 pass
int maxProfit(vector<int>& prices, int n)
{
 vector<int>profit(n,0);
 int l=1000000,ma=0;
  for(int i=0;i<n;i++){
      if(l>prices[i])
          l=prices[i];
      else {
          ma=max(ma,prices[i]-l);
      }
      profit[i]=ma;    
  }
  l=-1000000,ma=0;
    int ans=0;
  for(int i=n-1;i>=0;i--){
      if(l<prices[i])l=prices[i];
      else {
          ma=max(ma,l-prices[i]);
      }
      profit[i]+=ma;
      ans=max(ans,profit[i]);
  }  
    
      return ans;
}


//1 pass

int maxProfit(vector<int>& prices, int n)
{
    int b1=100000,p1=0,b2=100000,p2=0;
 for(auto it:prices){
    b1=min(b1,it);//first buy--------------- oo
     p1=max(p1,it-b1);//first sell --------------- oooo (Net profit =2)
     b2=min(b2,it-p1);//second effective buy after minusing profit of previous-----------  prices[i]-net profit= net second buy
     p2=max(p2,it-b2);//Overall profit ------------------ prices[i]-net second buy= net second sell
 }
   return p2;
}


