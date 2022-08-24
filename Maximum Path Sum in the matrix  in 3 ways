int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<m;j++){
            if(j==0){
matrix[i][j]+=max(matrix[i+1][j],matrix[i+1][j+1]);
            }else if(j==m-1){
matrix[i][j]+=max(matrix[i+1][j],matrix[i+1][j-1]);
            }else 
matrix[i][j]+=max(matrix[i+1][j],max(matrix[i+1][j+1],matrix[i+1][j-1]));
        }
    }
int ma=-100000000;
    for(int i=0;i<m;i++){
        ma=max(ma,matrix[0][i]);
    }return ma;
}
