int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &arr, int n, int m){

    for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    arr[i][j]=0;
                }else{
                    arr[i][j]+=arr[i-1][j];
                }
            }
        }long long ma=-1;
        vector<long long>prevsmall(m,0);
        vector<long long>nextsmall(m,0);
        stack<pair<long long,long long>>sq;
        for(int i=0;i<n;i++){
int j=0;
            //previous small;
        while(j<m){
    while(!sq.empty() && arr[i][j]<=sq.top().first)sq.pop();
            
        if(sq.empty())prevsmall[j]=-1;
            else prevsmall[j]=sq.top().second;
        sq.push({arr[i][j],j});
j++;
        }   while(!sq.empty())sq.pop(); 
         //next small
j=m-1;
         while(j>=0){
    while(!sq.empty() && arr[i][j]<=sq.top().first)sq.pop();
        if(sq.empty())nextsmall[j]=m; 
               else nextsmall[j]=sq.top().second;
        sq.push({arr[i][j],j});
j--;
        }   while(!sq.empty())sq.pop();
        
        
        for(long long j=0;j<m;j++){
            ma=max(ma,(nextsmall[j]-prevsmall[j]-1)*arr[i][j]);
        }
        
        }
        
        return ma;

}
