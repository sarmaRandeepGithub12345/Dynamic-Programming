int maximumProfit(int n, int fee, vector<int> &prices) {
    // Write your code here.
  int buy=0,sell=0,pb,ps;
    for(int i=n-1;i>=0;i--){
      pb=max(buy,sell-prices[i]);
      ps=max(sell,prices[i]+buy-fee);  
  buy=pb;
        sell=ps;
    }  
    return buy;
}
