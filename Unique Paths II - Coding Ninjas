int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
  if(mat[0][0]==-1)return 0;
    mat[0][0]=1;
  for(int i=1;i<m;i++){
  
  if(mat[0][i]==-1)break;
  else mat[0][i]+=mat[0][i-1];    
  }
      for(int i=1;i<n;i++){
   if(mat[i][0]==-1)break;
   else mat[i][0]+=mat[i-1][0];
  }
    
    
  for(int i=1;i<n;i++){
      for(int j=1;j<m;j++)
      {
       if(mat[i][j]==-1)continue;   
else if(mat[i][j-1]==-1 && mat[i-1][j]==-1)continue;   
else if(mat[i][j-1]==-1)mat[i][j]+=( mat[i-1][j])%1000000007;
else if(mat[i-1][j]==-1)mat[i][j]+=( mat[i][j-1])%1000000007;
else mat[i][j]=( mat[i-1][j]+mat[i][j-1])%1000000007;    
      }
  }  
    return mat[n-1][m-1];
}
