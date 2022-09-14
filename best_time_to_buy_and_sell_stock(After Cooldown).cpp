int stockProfit(vector<int> &prices){
    int n=prices.size();
    int buy=-prices[0],sell=0,cool=0;
    int b,s,c;
    for(int i=1;i<n;i++){
        b=max(buy,cool-prices[i]);
        s=max(sell,buy+prices[i]);
        c=max(cool,sell);
        buy=b;
        sell=s;
        cool=c;
    }return sell;
}
