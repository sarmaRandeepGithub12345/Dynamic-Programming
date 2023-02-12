 int snakesAndLadders(vector<vector<int>>& board) {
        
int n=board.size();
int m=board[0].size();
int s=1,k=1;
vector<int>nextmove(n*m+1,-1);
vector<int>visited(n*m+1,0);

for(int i=n-1;i>=0;i--){
    if(s==1){
    for(int j=0;j<m;j++)
       nextmove[k++]=board[i][j];
    

    s=2;
    }else if(s==2){
    for(int j=m-1;j>=0;j--)
       nextmove[k++]=board[i][j];
    

    s=1;
    }
}
queue<pair<int,int>>q;
q.push({1,0});
visited[0]=1;
visited[1]=1;
while(!q.empty()){
    int node = q.front().first;
    int dist= q.front().second;
    q.pop();
    if(node==n*m)return dist;
    for(int i=1;i<=6 && node+i<n*m+1;i++){
        int newn,newd;
        if(!visited[node+i]){
          visited[node+i]=1;
          if(nextmove[node+i]!=-1){
             newn=nextmove[node+i]; 
              
          }else if(nextmove[node+i]==-1){
             newn=i+node;
              
          }newd=dist+1;
          q.push({newn,newd});
            
        }
    }
}
return -1;
    }
