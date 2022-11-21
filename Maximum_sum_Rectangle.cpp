int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int ma=-1e9+7;
for(int i=0;i<C;i++){
    //declaring an array of size R
    vector<int>sum(R,0);
   //starting from column i
    for(int j=i;j<C;j++){
        
        for(int k=0;k<R;k++){
        sum[k]+=M[k][j];
        }
        /*Appying Kadane's algorithm to each column*/
    int s=0,tempma=0,negativeC=0,largestneg=-1e9+7;
    
    for(int k=0;k<R;k++){
    //for all negatives in a column    
    if(sum[k]<0){
        negativeC++;
        largestneg=max(largestneg,sum[k]);
    }
    //for all non negatives 
    s+=sum[k];
    if(s<0)s=0;
    else tempma=max(tempma,s);
    }   
    //final decision
    if(negativeC==R)ma=max(ma,largestneg);
    else ma=max(ma,tempma);
        
        
   }
}  return ma;
    }
