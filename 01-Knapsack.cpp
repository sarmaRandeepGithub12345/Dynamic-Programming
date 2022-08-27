int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
vector<int>temp(maxWeight+1,0);
for(int j=0;j<maxWeight+1;j++){
     if(j>=weight[0])temp[j]=value[0];   
}
for(int i=1;i<n;i++){
  vector<int>ac(maxWeight+1,0);  
    for(int j=0;j<maxWeight+1;j++){
        
       if(j<weight[i])ac[j]=temp[j] ;
       else ac[j]=max(temp[j],value[i]+temp[j-weight[i]]); 
    }temp=ac;
}    
    
    return temp[maxWeight];
}
